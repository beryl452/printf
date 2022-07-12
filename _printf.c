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
	int i = 0;
	va_list ap;

	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
				_putchar(va_arg(args, int));
			i++;
		}
		else
			_putchar(format[i]);
		i++;	
	}
	va_end(ap);
	return (0);
}
