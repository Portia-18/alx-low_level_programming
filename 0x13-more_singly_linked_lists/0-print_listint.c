#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - all elements printed of listint_t list
 * @h: pointer to head of list
 * Return: no. of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	size_t nds = 0;

	while (h)
	{
		nds++;
		printf("%d,\n", h->n);
		h =  h->next;
	}
	return (nds);
}
