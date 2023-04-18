#include <stdio.h>
#include <unistd.h>


/**
 * _putchar -writes the character c to stdout
 *
 * @c: character to be printed
 *
 * Return: return on success 1
 * on error, -1 is returned, and errno is set appropriately.
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * main - prints sqaure pattern using '*'
 *
 * Return: Always 0.
 */


int main(void)
{
	int size = 4;
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('*');
		}
		_putchar('\n');
	}
	return (0);
}

