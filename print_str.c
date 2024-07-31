#include "main.h"

/**
 * print_str - prints a string.
 * @list: argument passed as string.
 *
 * Return: len of string.
 */

int print_str(char *c)
{
	int i = 0;

	if (c == NULL)
		return (0);

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	
	return (i);
}
