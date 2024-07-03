#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: head of singly linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		printf("%u\n", temp->n);
		temp = temp->next;
		count++;
	}

	return (count);
}
