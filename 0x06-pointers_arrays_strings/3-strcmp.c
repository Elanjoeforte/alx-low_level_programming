#include "main.h"

/**
 * _strcmp - compares a pointer to two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: if str1 < str2, the negative difference of the first unmatched char
 * if str1 == str2, 0
 * if str1 > str2, the postive difference of the first unmatched char
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
