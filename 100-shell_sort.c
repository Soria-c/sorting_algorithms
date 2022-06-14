#include "sort.h"
/**
 * swap - swaps two values
 * @a: value
 * @b: value
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * shell_sort - implementation of the algorithm
 * @array: address of array to sort
 * @size: size of the array
 */

void shell_sort(int *array, size_t size)
{
	size_t h = 1, i;
	int j;

	if (!array || size <= 1)
		return;
	while (h < (size - 1) / 3)
		h = h * 3 + 1;

	for (; h >= 1; h = (h - 1) / 3)
	{
		for (i = 0; i < size - h; i++)
		{
			for (j = (int)i; array[j] > array[j + h] && j >= 0; j--)
				swap(&array[j], &array[j + h]);
		}
		print_array(array, size);
	}
}
