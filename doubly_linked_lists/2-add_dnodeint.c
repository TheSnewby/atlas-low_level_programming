#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to head of list
 * @n: value to be added at new head
 *
 * Return: address of new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL || head == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = NULL;
	new_node->n = n;
	if (*head != NULL) /* if list already has an element */
	{
		(*head)->prev = new_node;
		new_node->next = *head;
		*head = (*head)->prev;
		return (*head);
	}
	else
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
}
