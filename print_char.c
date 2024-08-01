#include "main.h"

/**
 * print_char - prints a string.
 * @c: char.
 *
 * Return: len of char.
 */

int print_char(va_list list)
{
	char c;

	c = va_arg(list, int);
	_putchar(c);
	return (1);

}
