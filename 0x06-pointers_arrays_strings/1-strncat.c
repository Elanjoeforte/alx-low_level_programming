#include "main.h"

/**
 * _strncat - concatenate two strings with n bytes
 * @dest: destination
 * @src: The source string
 * @n: number of characters to be appended
 * Return: The destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0 ; src[index] && index < n ; index++)
		dest[dest_len++] = src[index];
	return (dest);
}

