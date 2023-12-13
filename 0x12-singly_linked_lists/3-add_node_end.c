#include "lists.h"

/**
 * add_node_end - adds node at the end of the linked list
 * @head: ptr to the first node of the list
 * @str: str to add
 * Return: NULL if it fails
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_nd, *tmp;
	size_t str_len = 0;

	if (str == NULL)
		str_len = 0;

	while (str[str_len] != '\0')
		str_len++;

	new_nd = malloc(sizeof(list_t));
	if (new_nd == NULL)
		return (NULL);

	new_nd->str = strdup(str);
	new_nd->len = str_len;
	new_nd->next = NULL;

	tmp = *head;

	if (tmp == NULL)
		*head = new_nd;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_nd;
	}

	return (*head);
}
