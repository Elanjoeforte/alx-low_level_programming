#include "main.h"

/**
 * print_numbers - this print numbers from 0 - 9
 * Return: Always 0
 */

void print_numbers(void)
{
	char j;

	for (j = 0 ; j <= 9 ; j++)
		_putchar(j + '0');
	_putchar('\n');
	return (0);
}
