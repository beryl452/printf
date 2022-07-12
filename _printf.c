#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: Character string
 *
 * Description: Produces output according to a format
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{	
	int arg = 0;
	convert func_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};
	va_list ap;

	va_start(ap, format);
	arg = get_print(format, func_list, ap);
	va_end(ap);
	return (arg);
}
