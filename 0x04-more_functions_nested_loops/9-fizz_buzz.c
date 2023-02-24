#include <stdio.h>

/**
 * main - main function prints the numbers 1 t0 100
 * but fot multiples of three prints fizz instead of the number
 * and for multiples of five prints buzz instead of the number
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");

	}
	printf("\n");
	return (0);
}
