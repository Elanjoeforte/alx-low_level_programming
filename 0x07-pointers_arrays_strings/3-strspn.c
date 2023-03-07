#include "main.h"

/**
 * _strspn - gets the length of a prefix of a substring
 * @s: string to check out
 * @accept: string containing characters to be found in s
 * Return: the number of bytes in the initial segment of s
 * which consist of only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c;
	int j;

	c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		j = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				j = 1;
			}
		}
		if (j == 0)
		{
			return (c);
		}
	}
	return (0);
}
