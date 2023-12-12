#include "lists.h"

/**
 * add_node - add node at the beginning of the linked list
 *
 * @head: ptr to the first node of the list
 * @str: str add to new node in the list
 * Return: NULL if it fails
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nd;
	size_t str_len = 0;

	if (str == NULL)
		str_len = 0;

	while (str[str_len] != '\0')
		str_len++;

	new_nd = malloc(sizeof(list_t));
	if (new_nd == NULL)
		return (NULL);

	if (*head == NULL)
		new_nd->next = NULL;
	else
		new_nd->next = *head;

	new_nd->str = strdup(str);
	new_nd->len = str_len;
	*head = new_nd;

	return (*head);
}
