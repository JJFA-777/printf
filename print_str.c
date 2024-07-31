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

	str = c;

	if (str == NULL)
		str = "(nil)";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
