#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - A function that searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: string containing the bytes to search
 * Return: a pointer to the bytes in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
