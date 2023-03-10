#include "main.h"

/**
 * _isdigit - prints a return if it is a digit or not
 * @c: parameter to be checked
 * Return: return 1 if c is a digit
 * and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
