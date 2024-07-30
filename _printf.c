#include "main.h"

/**
* _printf - print anything to stdout.
* @format: data to be printed.
*
* Return: number of characters printed.
*/

int _printf(const char *format, ...)
{
	int i = 0, len;
	va_list args;
	char *buffer;

	len = buffer_len(format, ...);

	va_start(args, format);

	buffer = malloc(sizeof(char) * len);

	if (buffer == NULL)
		return (-1);

	for (i = 0; i < len + 1; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 's':
					print_str(va_arg(arg, char *));
					break;
				case 'c':
					print_char(va_arg(arg, int));
					break;
				case '%':
					_putchar('%');
					break;
			}
		}
	}
	write(1, buffer, len);
	free(buffer);
	return (len);
}
