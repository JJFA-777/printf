#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int buffer_len(const char *format, ...);
int _strlen(char *c);
int _strlen(const char *c)
int _putchar(char c);
int print_num(int);
int print_str(char *);
int print_char(char c);
int print_perc(void);

#endif /*MAIN_H*/
