#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer
 * Return: the head node’s data or 0 if linked list is empty
 */

int pop_listint(listint_t **head)

{
	listint_t *a;
	int b;

	if (!head || !*head)
		return (0);

	b = (*head)->n;
	a = (*head)->next;
	free(*head);
	*head = a;

	return (b);
}
