#include "lists.h"

/**
 * free_list - free single list link
 * @head: ptr to the first node of the list
 * Return: nothing
*/
void free_list(list_t *head)
{
	list_t *curnt;

	while ((curnt = head) != NULL)
	{
		head = head->next;
		free(curnt->str);
		free(curnt);
	}
}
