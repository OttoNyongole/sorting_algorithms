#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *n, int *m)
{
	int temp;

	temp = *n;
	*n = *m;
	*m = temp;
}
