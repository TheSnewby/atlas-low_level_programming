#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list including node address
 * @head: head of linked list
 *
 * Return: count of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head;
	size_t count = 0;

	if (head == NULL)
		exit(98);
	while (temp != NULL)
	{
		count++;
		printf("%p %d\n", (void *)temp, temp->n);
		temp = temp->next;
	}
	return (count);
}
