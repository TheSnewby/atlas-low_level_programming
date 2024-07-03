#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of list_t list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
