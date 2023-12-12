#include "lists.h"

/**
 * reverse_listint - reverses listint_t linked list
 * @head: head of linked list
 * Return: ptr to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *crnt, *prv = NULL;

	while (*head != NULL)
	{
		crnt = *head;
		*head = crnt->next;
		crnt->next = prv;
		prv = crnt;
	}
	*head = prv;
	return (*head);
}
