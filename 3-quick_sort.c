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
 * quick_sort - calls the principal function
 * @array: address of array to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (!array)
		return;
	quick_sort_true(array, size, array, size);
}

/**
 * quick_sort_true - implementation of the algorithm
 * @array: address of array to sort
 * @size: size of the array
 * @a_print: to print the complete array at each swap(zzz)
 * @s:  size of a_print
 * Return: index of the pivot
 */
void quick_sort_true(int *array, size_t size, int *a_print, size_t s)
{
	size_t r;

	if (size <= 1)
		return;
	r = bifurcation(array, size, a_print, s);
	quick_sort_true(array, r, a_print, s);
	quick_sort_true(&array[r + 1], size - (r + 1), a_print, s);
}

/**
 * bifurcation - partially sorts two segments delimited by a pivot
 * @array: address of array to sort
 * @size: size of the array
 * @a_print: to print the complete array at each swap(zzz)
 * @s:  size of a_print
 * Return: index of the pivot
 */
size_t bifurcation(int *array, size_t size, int *a_print, size_t s)
{
	size_t i, p = size - 1, max = 0;

	for (i = 0; i < size; i++)
	{
		if (array[p] > array[i])
		{
			if (i != max)
			{
				swap(&array[i], &array[max]);
				print_array(a_print, s);
			}
			max++;
		}
	}
	if (max != i)
	{
		swap(&array[p], &array[max]);
		print_array(a_print, s);
	}
	return (max);
}
