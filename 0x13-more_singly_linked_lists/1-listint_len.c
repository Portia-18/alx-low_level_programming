#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns no. of elements in a linked list
 * @h: pointer to head of list
 * Return: no. of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t nds = 0;

	while (h)
	{
		nds++;
		h = h->next;
	}
	return (nds);
}
