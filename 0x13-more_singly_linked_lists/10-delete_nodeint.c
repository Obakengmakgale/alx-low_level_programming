#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer
 * @index: index
 * Return: 1 if success or -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	unsigned int a = 0;
	listint_t *b = *head;
	listint_t *c = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(b);
		return (1);
	}

	while (a < index - 1)
	{
		if (!b || !(b->next))
			return (-1);
		b = b->next;
		a++;
	}

	c = b->next;
	b->next = c->next;
	free(c);
	return (1);
}
