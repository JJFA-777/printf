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
	char *str = NULL;
	int i = 0, retval = 0;

	va_start(list, format);

	while (format && format[i])
	{	
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 's':
					str = va_arg(list, char *);
					if (str == NULL)
					{
						return (i);
					}
					retval += print_str(str);
					i++;
				break;
				case '%':
					retval += _putchar('%');
					i++;
				break;
			}
		}
		_putchar(format[i]);
		i++;
		retval++;
	}

	va_end(list);

	return (retval);
}
