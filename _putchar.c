#include "main.h"

/**
 * _putchar - print the character @c
 * @c: Character to print
 * Return: 1 if success and -1 Otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - Prints character
 * @list: list of arguments
 * Return: The amount of characters printed
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
