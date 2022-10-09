#include "sort.h"

/**
 * swap_ints - Swaps the adjacent integers in array
 * @n: a first integer to swap
 * @m: second integer to swap
 */
void swap_ints(int *n, int *m)
{
	int tmp;

	tmp = *n;
	*n = *m;
	*m = tmp;
}

/*
 * selection_sort - Sort an array of integers in ascending orde
 * 			using selection sort algorithm.
 * @array: an array of integers.
 * @size: The size of an array.
 *
 * Description: Printing the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size -1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap_ints(array + i, min);
			print_array(array, size);
		}
	}

}
