#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of list_t list
 * @str: str to be added
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *new_node = NULL;
	char *str_copy = strdup(str);

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (0);

	while (head)
	{
		i++;
		(*head) = head->next;
	}
	(*head) = new_node;
	new_node->len = i;
	new_node->str = str_copy;
	new_node->next = NULL;

	return (*head);
}
