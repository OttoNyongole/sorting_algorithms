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
int partition(int *array, int low, int high, size_t size);
{
	int *pivot, above, below;

	pivot = array + high;
	for (above = below = low; below < high; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				swap(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pivot)
	{
		swap(array + above, pivot);
		print_array(array, size);
	}

	return (above);
}


/**
 * sort - sorts an array
 * @array: array to be sorted
 * @low: left part of pivot
 * @high: right part of pivot
 * @size: size of the array
 * Return: void
*/
void sort(int *array, int low, int high, size_t size)
{
	int i;
	if (low >= high || low < 0)
		return;
	i = partition(array, low, high, size);
	sort(array, low, i - 1, size);
	sort(array, i + 1, high, size);
}

/**
 * quick_sort - quick sort function implementation on array.
 * @array: array to be sorted.
 * @size: size of the array.
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (size > 1)
	{
		sort(array, 0, size - 1, size);
	}
}
