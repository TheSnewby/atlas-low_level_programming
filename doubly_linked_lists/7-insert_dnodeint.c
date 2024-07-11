#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new doubly linked list at a given pos
 * @h: pointer to header
 * @idx: index of new location
 * @n: value stored at location
 *
 * Return: address of new node, or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	unsigned int count = 0;

	if (h == NULL || new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		if (*h != NULL)
		{
			new_node->next = *h;
			(*h)->prev = new_node;
		}
		else
			new_node->next = NULL;
		return (new_node);
	}

	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}

	if (count < idx - 1 && temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next = new_node;
	if (temp->next->next != NULL)
		temp->next->next->prev = new_node;
	return (new_node);
}
