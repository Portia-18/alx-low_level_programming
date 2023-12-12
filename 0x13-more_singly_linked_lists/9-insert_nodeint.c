#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts new node in linked list,
 * at a given position
 * @head: ptr to first node in list
 * @idx: index where new node is added
 * @n: data to insert in new node
 *
 * Return: ptr to the node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int u;
listint_t *nw;
listint_t *temp = *head;

nw = malloc(sizeof(listint_t));
if (!nw || !head)
return (NULL);

nw->n = n;
nw->next = NULL;

if (idx == 0)
{
nw->next = *head;
*head = nw;
return (nw);
}

for (u = 0; temp && u < idx; u++)
{
if (u == idx - 1)
{
nw->next = temp->next;
temp->next = nw;
return (nw);
}
else
temp = temp->next;
}

return (NULL);
}
