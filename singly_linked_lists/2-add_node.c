#include "lists.h"

/**
 * add_node - adds a new node a thte beginning of a list_t list
 * @head: head of list_t list
 * @str: str to be added
 *
 * Return: address of new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	char *str_copy = NULL;
	unsigned int length = 0;
	int i = 0;

	new_node = (list_t *)malloc(sizeof(list_t));
	str_copy = strdup(str);

	if (new_node == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	new_node->str = str_copy;
	new_node->next = *head;
	new_node->len = i;
	(*head) = new_node;

	return (*head);
}
