#include "main.h"

/**
 * print_perc - print % sign.
 *
 * Return: 1.
 */

int print_perc(va_list list)
{
	char c = va_arg(list, int);
	_putchar(c);
	return (1);
}

