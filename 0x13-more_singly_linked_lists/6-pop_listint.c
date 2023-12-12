#include "lists.h"
#include <stdio.h>
#include  <stdlib.h>

/**
 * pop_listint - deletes head of node
 *
 * @head: ptr to the first node in the list
 *
 * Return: data of head node(n)
*/
int pop_listint(listint_t **head)
{
	int node_one;
	listint_t *temp, *next;

	if (*head == NULL)
		return (0);

	temp = *head;
	next = temp->next;
	node_one = temp->n;

	free(temp);

	*head = next;

	return (node_one);
}
