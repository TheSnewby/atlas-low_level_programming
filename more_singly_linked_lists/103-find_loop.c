#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of linked list
 *
 * Return: address of the node start, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (head == NULL)
		return (NULL);

	while (slow != NULL && fast != NULL)
	{
		if (slow == fast)
			return (slow);
		slow = slow->next;
		fast = fast->next;
		fast = fast->next;
	}
	return (NULL);
}
