#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to head of list
 * @n: value to be added at new node
 *
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (head == NULL || new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (temp->next != NULL)
		temp = temp->next;

	if (*head != NULL)
	{
		temp->next = new_node;
		new_node->prev = temp;
		new_node->next = NULL;
		return (new_node);
	}
	else
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}
}
