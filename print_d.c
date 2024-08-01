#include "main.h"

/**
 *print_num - Prints an int argument.
 *@list: argument list.
 *Return: Length of characters printed.
 */

int print_d(va_list list)
{
	int o_num;
	int p_ten;
	int len;
	unsigned int abs_num;

	o_num = va_arg(list, int);
	p_ten = 1;
	len = 0;

	if (o_num < 0)
	{
		len += _putchar('-');
		abs_num = -o_num;
	}

	else
		abs_num = o_num;

	while (abs_num / p_ten > 9)
	{
		p_ten *= 10;
	}
	while (p_ten != 0)
	{
		len += _putchar('0' + abs_num / p_ten);
		abs_num %= p_ten;
		p_ten /= 10;
	}

	return (len);

}
