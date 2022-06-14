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
 * bubble_sort - implementation of the algorithm
 * @array: address of an array of int to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, i = 0, size2 = size;

	if (!array || size <= 0)
		return;
	for (; i < size; i++, size2--)
	{
		for (j = 0; j < size2 - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
