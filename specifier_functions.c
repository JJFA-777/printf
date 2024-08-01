#include "main.h"

/**
* specifier_functions - scans struct atrray for correct specifiers.
* @args: specifiers to be passed in.
*
*Return: void.
*/

void (*specifier_functions)(const char c, va_list args)
{
	int i = 0;

	p_func_t p_func = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_perc},
		{'d', print_num},
		{'i', print_i},
		{'\0', NULL}
	};

	for (i = 0; p_func[i] < '\0'; i++)
	{
			if (c == p_func[i].c)
			{
					p_func[i].print_func(args);
					break;
			}
	}
	
}
