#include "main.h"

/**
 * print_d - prints an integer.
 * @args: argument list containing the integer.
 *
 * Return: number of characters printed.
 */
int print_d(va_list args)
{
    int n = va_arg(args, int);
    int divisor = 1;
    int num = n;
    int len = 0;

    if (n < 0)
    {
        _putchar('-');
        num = -num;
        len++;
    }

    while (num / divisor > 9)
    {
        divisor *= 10;
    }

    while (divisor != 0)
    {
        _putchar((num / divisor) + '0');
        num %= divisor;
        divisor /= 10;
        len++;
    }

    return (len);
}

#include "main.h"

/**
 *print_binary - converts an unsigned int argument to bin
 *@list: list of unsigned int arguments.
 *Return: number of characters printed.
 */

int print_binary(va_list list)
{
	unsigned int n;
	unsigned int i = 0;
	char buffer[32];
	int len = 0;

	n = va_arg(list, unsigned int);

	if (n == 0)
		return (len += _putchar('0'));

	while (n > 0)
	{
		buffer[i++] = (n % 2) + '0';
		n /= 2;
	}
	while (i > 0)
	{
		len += _putchar(buffer[--i]);
	}
	return (len);
}

#include "main.h"

/**
 *print_num - Prints an int argument.
 *@list: argument list.
 *Return: Length of characters printed.
 */

int print_num(va_list list)
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

/**
 *print_unsigned_int - Prints an int argument.
 *@list: argument list.
 *Return: Length of characters printed.
 */
int print_unsigned_int(va_list list)
{
	int p_ten;
	int len;
	unsigned int num;

	p_ten = 1;
	len = 0;
	num = va_arg(list, unsigned int);
	while (num / p_ten > 9)
	{
		p_ten *= 10;
	}
	while (p_ten != 0)
	{
		len += _putchar('0' + num / p_ten);
		num %= p_ten;
		p_ten /= 10;
	}
	return (len);
}
