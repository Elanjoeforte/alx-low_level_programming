#include <stdio.h>

/**
 * main - this is the main function
 * Return: Always 0
 */

int main(void)
{
	char charType;
	int integerType;
	long int integerType;
	long long int doubleType;
	float floatType;

/* size of operator is used to evaluate the size of the variable */
	printf("size of a char: %ld byte(s)\n", sizeof(charType));
	printf("size of an int: %ld bytes(s)\n", sizeof(integerType));
	printf("size of a long int: %ld byte(s)\n", sizeof(intergerType));
	printf("size of a long long int: %ld byte(s)\n", sizeof(doubleType));
	printf("size of a float: %ld byte(s)\n", sizeof(floatType));
	return (0);
}
