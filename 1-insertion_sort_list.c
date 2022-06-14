#include "sort.h"

/**
 * swap_l - swaps two given nodes of a linked list
 * @a: node
 * @b: node
 */

void swap_l(listint_t *a, listint_t *b)
{
	a->next = b->next;
	if (a->prev)
		a->prev->next = b;
	if (b->next)
		b->next->prev = a;
	b->next = a;
	b->prev = a->prev;
	a->prev = b;
}

/**
 * insertion_sort_list - implementation of the algorithm
 * @list: address of the head of the linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = *list, *tmp2 = NULL;

	if (!tmp || !list)
		return;

	for (; tmp; tmp = tmp->next)
	{
		tmp2 = tmp;
		while (tmp2->prev && (tmp2->n < tmp2->prev->n))
		{
			swap_l(tmp2->prev, tmp2);
			if (!tmp2->prev)
				(*list) = tmp2;
			print_list(*list);
		}
	}
}
