#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - reallocates mem for array of ptrs
 * to the nodes in a linked list
 * @list: old list to append
 * @size: siz of new list (always one more than the old list)
 * @new: new node to add to list
 *
 * Return: ptr to new list
 */

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t u;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (u = 0; u < size - 1; u++)
		newlist[u] = list[u];
	newlist[u] = new;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe - prts a listint_t linked list.
 * @head: ptr to the start of list
 *
 * Return: the no of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t u, nm = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (u = 0; u < nm; u++)
		{
			if (head == list[u])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (nm);
			}
		}
		nm++;
		list = _r(list, nm, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (nm);
}
