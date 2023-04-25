#include "main.h"


void free_data(data_store *stash)
{

	free(stash->pid);
}

/**
 * set_data - Initialize data structure
 *
 * @datash: data structure
 * @av: argument vector
 * Return: no return
 */
void set_data(data_store *stash, char **av)
{

	stash->av = av;
	stash->input = NULL;
	stash->args = NULL;
	stash->status = 0;
	stash->counter = 1;

	stash->pid = getpid();
}


/**
 * main - program entry point
 * 
 * @ac - number of arguments
 * @av - argument
 * 
 * Return: 0 Success
 */

int main(int ac, char **av)
{
	data_store stash;
	(void) ac;
	(void) av;

	set_data(&stash, av);
	main_loop(&stash);
	free_data(&stash);
	if (stash.status < 0)
		return (255);
	return (stash.status);
}
