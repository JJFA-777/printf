#include "main.h"

/**
 * print_str - prints a string.
 * @list: argument passed as string.
 *
 * Return: len of string.
 */

int print_str(va_list list)
{
	char *c;
	int i = 0;

	c = va_arg(list, char *);

	if (c == NULL)
		c = ("(null)");

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	
	return (i);
}
