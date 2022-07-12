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
