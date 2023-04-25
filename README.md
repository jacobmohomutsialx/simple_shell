# simple_shell


## Description
0x16. C - Simple Shell - Compile your own shell using Cprogramming language

# Boilerplate
 - Create repo
 - Add contributor
 - Monitor commits
 - You should have an AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository.
 - Write a README with the description of your project
 - All your header files should be include guarded
 - No more than 5 functions per file
 - Your shell should not have any memory leaks
 - Betty style
 - A README.md file, at the root of the folder of the project is mandatory
 - All your files should end with a new line
 - Test with gcc | gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
 - header file

Task 0
Emphasis on clarity regarding documentation
1. simple c code we will print out a shape
2. _putchar.c, main.h, main.c, printsquare.c
## Pseudo Code
parse a value number(n)
we print the character * 
loop and print * nxn times
return 0

Task 1
Emphasis on clarity regarding documentation
1. creating a shell
2. _putchar.c, main.h, main.c, printsquare.c
## Pseudo Code
Pseudocode for the program:

Define a main function.
Define the necessary variables, including the command length, a line buffer, a process id, and a line buffer size.
Start an infinite loop to continuously prompt the user for input.
Inside the loop, print the prompt "#cisfun$ ".
Read the user's command using GETLINE.
Check for errors WHILE reading the command. IF EOF condition is met EXIT(SUCCESS) STDIN command string, 
ELSE there is "GETLINE" error, EXIT the program.
Remove the trailing newline character from the command.
FORK a child process to execute the command.
Check for errors while forking the child process. IF there is an error, EXIT the program.
IF the process is the child, split the command into words using STRTOK.
Check IF the command is executable using ACCESS.
IF the command is executable, execute the command using EXECVE.
IF there is an error executing the command, WRITE the error message and EXIT the child process.
IF the process is the parent, wait for the child process to complete.
FREE the memory allocated by getline.
End the infinite loop.
RETURN 0 to indicate successful program execution.


