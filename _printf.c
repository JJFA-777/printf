#include "main.h"

/**
 *_printf - Prints formatted input to the standard output.
 *@format: character string.
 *
 * Return: No return value.
 */

int _printf(const char *format, ...)
{
	va_list list;
	unsigned int i;
	int b = 0;
	int str_i;

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			b++;
		}
		else
		{
			if (format[i + 1] == 'c')
			{
				i += print_char(list);
				b++;
			}
			if (format[i + 1] == 's')
			{
				str_i = print_str(list);
				i++;
				b += (str_i - 1);
			}
			if (format[i + 1] == '%')
			{
				_putchar('%');
				b++;
			}
			if (format[i + 1] == 'd'|| format[i +1] == 'i')
			{
				i++;
				b += print_d(list);
			}
			if (format[i + 1] == 'u')
			{
				i++;
				b += print_unsigned_int(list);
			}
			if (format[i + 1] == 'b')
			{
				i++;
				b += print_binary(list);
			}
		}
	}

	return (b);
}

