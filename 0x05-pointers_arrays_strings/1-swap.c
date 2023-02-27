#include "main.h"

/**
 * swap_int - this function swaps the integer a and b
 * @a: integer to be swapped
 * @b: integer to also be swapped
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
