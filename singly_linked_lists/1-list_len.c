#include "lists.h"

/**
 * list_len - returns number of elements in a list_t list
 * @h: head
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++; /* is it this simple? */
		h = h->next;
	}
	return (count);
}
