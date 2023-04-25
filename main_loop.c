#include "main.h"
/**
 * main - check the code
 * @command:  char array to store the user input command string
 * @line_buffer: a pointer to a char array which
 *            will be used to store the user's input from the command line
 *
 *
 * Return: Always 0.
 */

void shell_loop(data_shell *datash)
{
 /* char command[MAX_COMMAND_LENGTH]; */
	int loop;
	    loop = 1;
    ssize_t command_len = 0;
    char *line_buffer = NULL;
    pid_t pid;
    size_t line_buffer_size = 0;

    while(loop = 1)
    {
        /* print the prompt */
        write(STDOUT_FILENO, "#cisfun$ ", 9);

        /* read the command */
        /* ssize_t command_len = 0; */
        /* char *line_buffer = NULL; */
        /* command_len = getline(&line_buffer, &command_len, stdin); */
        /*command_len = getline(&line_buffer, &line_buffer_size, stdin, &command_len); */
        command_len = getline(&line_buffer, &line_buffer_size, stdin);

        if (command_len == -1)
        {
                if (feof(stdin))
                {
                    /* end of file condition */
                    exit(EXIT_SUCCESS);
                }
                else
                {
                    perror("getline");
                    exit(EXIT_FAILURE);
                }
        }

        /* remove trailing newline character from the command */
        if (command_len > 0 && line_buffer[command_len-1] == '\n')
        {
            line_buffer[command_len-1] = '\0';
        }

        /* fork a child process to execute the command */
        pid = fork();

        if (pid < 0)
        {
            perror("fork");
            exit(EXIT_FAILURE);
        }

        else if (pid == 0)
        {
                /* child process */

                /* split the command into words using strtok */
                char *token = strtok(line_buffer, " ");
                /* execute the command */
                if (access(token, X_OK) == 0)
                {
                    execve(token, &token, NULL);
                    /* execve only returns if an error occurs */
                    perror("execve");
                    exit(EXIT_FAILURE);
                }
                else
                {
                    write(STDERR_FILENO, "Command not found\n", 18);
                    exit(EXIT_FAILURE);
                }
        }
        else
        {
            /* parent process */
            waitpid(pid, NULL, 0);
        }

        /* free the memory allocated by getline*/
        free(line_buffer);
    }

    return 0;
}
