#include <stdlib.h>
#include "lists.h"

/**
 * list_len - it returns the number of elements in a linked list
 * @h: the pointer to the list_t list
 *
 * Return: the number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t z = 0;

	while (h)
	{
		z++;
		h = h->next;
	}
	return (z);
}
