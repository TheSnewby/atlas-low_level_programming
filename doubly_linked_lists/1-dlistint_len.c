#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: header of list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}
