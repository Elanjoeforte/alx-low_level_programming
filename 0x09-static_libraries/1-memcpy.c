#include "main.h"

/**
 * *_memcpy - This function copys a memory area
 * @dest: memory area to be copied to
 * @src: memory area to be copied from
 * @n: number of times to copy the memory area
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}