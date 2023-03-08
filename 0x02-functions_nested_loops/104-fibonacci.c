#include <stdio.h>

/**
 * main - this prints out the fibonacci sequence of numbers
 * Return: always 0
 */

int main(void)
{
	int a = 0;
	int b = 1;
	int c;

	while (b < 100)
	{
		printf("%d\n", b);
		c = a;
		a = b;
		b = b + c;
	}
	return (0);
}
