#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all data (n)
 *              of a list.
 *
 * @head: ptr to first node of list
 *
 * Return: the sum of all (n)
*/
int sum_listint(listint_t *head)
{
	int sm = 0;

	while (head != NULL)
	{
		sm += head->n;
		head = head->next;
	}

	return (sm);
}
