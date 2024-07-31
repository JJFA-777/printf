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
	int i = 0, j, len;
	va_list args;
	char *buffer, *str;

	len = buffer_len(format, args);
	printf("Buffer len: %d\n", len);

	va_start(args, format);

	buffer = malloc(sizeof(char) * len);

	if (buffer == NULL)
		return (-1);

	for (i = 0; i < len + 1; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 's':
					str = va_arg(args, char *);

					for (j = 0; str[j] != '\0'; j++)
					{
						buffer[i] = str[j];
						i++;
					}
					break;
				case 'c':
					buffer[i] = va_arg(args, int);
					break;
				case '%':
					buffer[i] = '%';
					break;
			}
		}
		else 
			buffer[i] = format[i];
	}
	write(1, buffer, len);
	free(buffer);
	return (len);
}
