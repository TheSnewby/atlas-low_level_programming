#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: head of list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("%s\n", "[0] (nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
