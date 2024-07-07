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
int main(void)
{
    listint_t *head;
    listint_t *head2;
    listint_t *node;

    head2 = NULL;
    add_nodeint(&head2, 0);
    add_nodeint(&head2, 1);
    add_nodeint(&head2, 2);
    add_nodeint(&head2, 3);
    add_nodeint(&head2, 4);
    add_nodeint(&head2, 98);
    add_nodeint(&head2, 402);
    add_nodeint(&head2, 1024);
    print_listint_safe(head2);
    /*head = NULL;
    node = add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    node->next = add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint_safe(head); */
    return (0);
}