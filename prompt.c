#include <stdio.h>

/**
 * main - prints command line args
 * @argc:
 * @argv:
 *
 * Return: Nothing.
 */


int main(int argc, char *argv[])
{

	(void)argc;
	char **arg = argv; /* declaration of pointer to a pointer */
	while (*arg != NULL) 
	{
		printf("%s\n", *arg);
		arg++;
	}
	
	return 0;
}
