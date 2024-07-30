#include "main.h"

/**
 *_strlen - Calculates the length of a string argument.
 *@list: List containing the string optional arguments
 *
 * Return: The length of the string.
 */

int _strlen(va_list list)
{
	char *str;
	int i = 0;

	str = va_arg(list, char *);

	if (str == NULL)
		return (0);

	while(str[i])
		i++;

	return (i);

}
