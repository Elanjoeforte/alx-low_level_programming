#include "main.h"

/**
 * print_most_numbers - This function prints most numbers
 * Return: Always 0
 */

void print_most_numbers(void)
{
	char i;

	for (i = 0 ; i <= 9 ; i++)
		if (i != 2 && i != 4)
			_putchar(i + '0');
	_putchar('\n');
}
