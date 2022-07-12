#include "main.h"

/**
 * get_print - Receives the main string and necessary parameters
 * to print a formated string
 * @format: String containing the desired characters
 * @func_list: List of all the possible functions
 * @arg_list: List containing all the arguments passed to the program
 *
 * Return: A count of the characters printed
 */
int get_print(const char *format, convert func_list[], va_list arg_list)
{
	int i, j, count = 0;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			continue;
		}
		for (j = 0; func_list[j].fm; j++)
		{
			if (*func_list[j].fm == format[i + 1])
			{
				count += func_list[j].func(arg_list);
				break;
			}
		}
		i++;
		if (!func_list[j].fm)
		{
			count += _putchar('%');
			count += _putchar(format[i]);
		}
	}
	return (count);
}

/**
 * print_char - Print character
 * @list: list of arguments
 *
 * Return: The amount of characters printed
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string - Prints a string
 * @list: list of arguments
 *
 * Return: The amount of characteres printed
 */
int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_percent - Prints a percent symbol
 * @list: list of arguments
 *
 * Return: The amount of characters printed
 */
int print_percent(__attribute((unused))va_list list)
{
	_putchar('%');
	return (1);
}

/**
 * print_integer - Prints an integer
 * @list: list of arguments
 *
 * Return: a count of the numbers
 */
int print_integer(va_list list)
{
	int len;

	len = print_number(list);
	return (len);
}
