#include <stdio.h>
#include <unistd.h>

/**
 * main - PID - this is the unique process identification that is
 * always generated uniquelly for the current running process.
 *
 * Return: Always 0.
 */

int main(void)
{
	pid_t my_pid;
	pid_t my_ppid;

	my_pid = getpid();
	printf("%u\n", my_pid);

	my_ppid = getppid();
	printf("%u\n", my_ppid);
    
	return (0);
}
