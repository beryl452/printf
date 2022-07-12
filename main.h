#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct convert - Struct for formats and functions
 * @f: the format
 * @func: Pointer to function
 */
typedef struct convert
{
	char *fm;
	int (*func)(va_list);
} convert;

int _putchar(char c);
int _printf(const char *format, ...);
int print_number(va_list);
int get_print(const char *format, convert func_list[], va_list arg_list);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list);
int print_integer(va_list);

#endif /* MAIN_H */
