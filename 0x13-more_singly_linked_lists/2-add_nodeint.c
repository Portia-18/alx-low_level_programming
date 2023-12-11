#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - adds new node at beginning of list
 * @head: pointer to address of head of list
 * @n: integer for new node to contain
 * Return: NULL fail address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->next = *head;

	*head = nw;

	return (nw);
}
