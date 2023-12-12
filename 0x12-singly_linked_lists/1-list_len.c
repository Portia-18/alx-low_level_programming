#include "lists.h"
#include <stdio.h>
/**
 * list_len - gets the no of nodes
 *
 * @h: ptr to the head
 * Return: no of nodes
 */

size_t list_len(const list_t *h)
{
	size_t nd_count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		nd_count++;
	}

	return (nd_count);
}
