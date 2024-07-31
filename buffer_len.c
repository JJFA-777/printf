#include "main.h"

/**
 * buffer_len - function that calculates len of buffer.
 * @format: string to be passed.
 *
 * Return: length of buffer.
 */

int buffer_len(const char *format, ...)
{
	int i, len;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 's':
					len += _strlen(va_arg(args, char *));
					break;
				case 'c':
					len += 1;
					break;
				case '%':
					len += 1;
					break;
			}
		}
		len += 1;
	}
	va_end(args);
	return (len);
}
