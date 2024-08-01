#include "main.h"
#include <stdio.h>

/**
 * _printf - print anything to stdout.
 * @format: data to be printed.
 *
 * Return: number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, retval = 0;

	int (*get_sp_fun)(va_list list);

	if (!format)
		return (-1);

	va_start(list, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				break;
			get_sp_fun = specifier_functions(format[i]);
			if (get_sp_fun != NULL)
			{
				retval += get_sp_fun(list);
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
				retval += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			retval++;
		}
		i++;
	}
	va_end(list);
	return (retval);
}
