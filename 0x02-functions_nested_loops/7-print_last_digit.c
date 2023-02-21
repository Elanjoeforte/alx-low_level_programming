#include "main.h"

/**
 * print_last_digit - this prints the last digit of a parameter
 * @r: parameter to be checked
 * Return: value of the last digit
 */

int print_last_digit(int r)
{
	int n;

	if (r < 0)
		r = -r;

	n = r % 10;
	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
