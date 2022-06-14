#include "sort.h"

/**
 * selection_sort - implementation of the algorithm
 * @array: address of an array of int to sort
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min, tmp;

	if (!array)
		return;

	for (i = 0; i < size - 2; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		if (min != i)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
