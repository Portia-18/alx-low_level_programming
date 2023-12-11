#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds new node at end of list
 * @head: a ptr to address of head list
 * @n: integer for new node to contain
 * Return: & of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw, *lst;

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (*head == NULL)
		*head = nw;

	else
	{
		lst = *head;
		while (lst->next != NULL)
			lst = lst->next;
		lst->next = nw;
	}
	return (*head);
}
