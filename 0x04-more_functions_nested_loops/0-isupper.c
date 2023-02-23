#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: parameter to be checked
 * Return: returns 0 if c is not upper case
 * and 1 if c is uppercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
