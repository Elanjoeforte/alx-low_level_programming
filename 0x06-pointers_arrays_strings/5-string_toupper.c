#include "main.h"

/**
 * string_toupper - changes all lower case letters
 * @str: the string to be changed
 * Return: Apointer to a chnaged string
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
