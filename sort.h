#ifndef SORT_H
#define SORT_H


#include <stdio.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_list(const listint_t *);
void print_array(const int *, size_t);
void bubble_sort(int *, size_t);
void insertion_sort_list(listint_t **);
void swap_l(listint_t *, listint_t *);
void selection_sort(int *, size_t);
void swap(int *, int *);
void quick_sort(int *, size_t);
size_t bifurcation(int *, size_t, int *, size_t);
void quick_sort_true(int *array, size_t size, int *, size_t);
void shell_sort(int *array, size_t size);

#endif /*SORT_H*/
