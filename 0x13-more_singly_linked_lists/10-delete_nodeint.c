#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delts node in linked list at a certain idx
 * @head: ptr to first element in list
 * @index: idx of node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *current = NULL;
unsigned int u = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}
while (u < index - 1)
{
if (!temp || !(temp->next))
return (-1);
temp = temp->next;
u++;
}

current = temp->next;
temp->next = current->next;
free(current);

return (1);
}
