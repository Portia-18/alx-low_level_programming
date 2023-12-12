#include "lists.h"

/**
 * find_listint_loop - finds loop in linked list.
 * @head: ptr to beginning of list
 * Return: address of node where loop starts or NULL if there's no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *brown, *white;

	brown = white = head;
	while (brown && white && white->next)
	{
		brown = brown->next;
		white = white->next->next;
		if (brown == white)
		{
			brown = head;
			break;
		}
	}
	if (!brown || !white || !white->next)
		return (NULL);
	while (brown != white)
	{
		brown = brown->next;
		white = white->next;
	}
	return (white);
}
