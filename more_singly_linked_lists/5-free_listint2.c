#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}

		*head = NULL; /* passing a ** allows modification of pointer */
		}
	}
