#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a linked list
 * @head: head of list
 * @index: desired nth node
 *
 * Return: node at nth location, or NULL if does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = NULL;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL && count <= index)
	{
		temp = head;
		head = head->next;
		count++;
	}

	if (count == index)
		return (temp);

	return (NULL);
}
