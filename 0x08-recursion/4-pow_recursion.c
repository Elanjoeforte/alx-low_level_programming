#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: The integer to be raised by a power
 * @y: The power
 * Return: -1 if y is less than 0 and 1 if y is equal to zero
 * and the value of x raised to y if y is greater than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
