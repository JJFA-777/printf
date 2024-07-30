#include "main.h"

/**
 * buffer_len - function that calculates len of buffer.
 * @format: string to be passed.
 *
 * Return: length of buffer.
 */

int buffer_len(const char *format, ...)
{
	int i;
	va_list args;

	len = _strlen(format);

	va_start(args, format);

	for (i = 0; i < len + 1; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 's':
					len += (_strlen(va_arg(args, char *) - 2));
					break;
				case 'c':
					len -= 1;
					break;
				case '%':
					len -= 1;
					break;
			}
		}
	}
	va_end(list, args);
	return (len);
}
