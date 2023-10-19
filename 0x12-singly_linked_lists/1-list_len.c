#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * list_len - Finds the number of elements in
 *            a linked list_t list.
 * @h: the pointer to  list.
 * Return: The number of elements in h.
 */
size_t list_len(const list_t *h)
	{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
	}
