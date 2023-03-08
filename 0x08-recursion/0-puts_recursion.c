#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - This functions prints a string recursively
 * @s: string to be printed
 * Return: The printed string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
