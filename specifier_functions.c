#include "main.h"

/**
* specifier_functions - scans struct atrray for correct specifiers.
* @args: specifiers to be passed in.
*
*Return: void.
*/

int (*specifier_functions(char c))(va_list args)
{
	int i = 0;

	p_func_t p_func = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_perc},
		{'d', print_d},
		{'i', print_i},
		{'\0', NULL}
	};

	for (i = 0; p_func[i].c < '\0'; i++)
	{
			if (c == p_func[i].c)
			{
				return (p_func[i].print_func);
			}
	}
	return (NULL);
}
