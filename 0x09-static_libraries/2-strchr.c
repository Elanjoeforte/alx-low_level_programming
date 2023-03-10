#include "main.h"
#include <stddef.h>

/**
 * *_strchr - function that locates a character in a string
 * @s: string to search
 * @c: character to find
 * Return: a pointer to the first occurence of the character
 * c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (;;)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
