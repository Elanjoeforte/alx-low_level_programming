#include <stdio.h>

/**
 * main - this is the main function
 * Return: Always 0
 */

int main(void)
{
	printf("size of a char: %lu byte(s)", sizeof(char));
	printf("size of an int: %lu bytes(s)", sizeof(int));
	printf("size of a long int: %lu byte(s)", sizeof(int));
	printf("size of a long long int: %lu byte(s)", sizeof(double));
	printf("size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
