#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
