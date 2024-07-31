#include "main.h"

/**
 *_strlen - Calculates the length of a string argument.
 *@c: string.
 *@list: List containing the string optional arguments
 *
 * Return: The length of the string.
 */


int _strlen(char *c)
{
	int i = 0;

	if (c == NULL)
		return (0);

	while(c[i] != '\0')
		i++;

	return (i);

}

/**
 *_strlenc - Calculates the length of a const string.
 *@c: const string.
 *
 * Return: The length of the string.
 */

int _strlenc(const char *c)
{
	int i = 0;

	if (c == NULL)
		return (0);

	while(c[i] != '\0')
		i++;

	return (i);
}
