#include "lists.h"
/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: head of doubly linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int size = 0;

	while (temp != NULL)
	{
		size++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (size);
}
