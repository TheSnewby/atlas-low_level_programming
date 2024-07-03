#include "lists.h"

/**
 * listint_len - returns number of elements in a linked listint_t list
 * @h: head of listint_t list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
