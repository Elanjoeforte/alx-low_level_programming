#include "main.h"

/**
 * print_line - this function prints the line
 * @n: number of times the _ should be printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1 ; i <= n ; i++)
		{
			_putchar('_');
		}
	}
}
