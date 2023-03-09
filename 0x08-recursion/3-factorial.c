#include "main.h"

/**
 * factorial - this functions returns the factorial of a given number
 * @n: Number which factorial will be found
 * Return: -1 if number is less than 0
 * and factorial if numebr is greater than 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
