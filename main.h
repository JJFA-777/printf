#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int buffer_len(const char *format, ...);
int _strlen(char *c);
int _strlenc(const char *c);
int _putchar(char c);
int print_d(va_list list);
int print_str(va_list list);
int print_char(va_list list);
int print_perc(va_list list);

typedef struct p_func{
		char c;
		int (*print_func)(va_list args);
		} p_func_t;

int (*specifier_functions(char c))(va_list list);

#endif /*MAIN_H*/
