#include "main.h"

/**
 * print_i - prints an integer.
 * @args: argument list containing the integer.
 *
 * Return: number of characters printed.
 */
int print_i(va_list args)
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

