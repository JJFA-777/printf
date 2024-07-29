#include "main.h"

/**
 * print_str - prints a string.
 * @list: argument passed as string.
 *
 * Return: len of string.
 */

char *print_str(va_list list)
{
	int i = 0;
	char *s;

	s = va_arg(list, char *);

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
