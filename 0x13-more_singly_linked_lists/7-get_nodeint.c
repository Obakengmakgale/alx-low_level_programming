#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: first node
 * @index: index of the node
 * Return: pointer to node or NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int a = 0;
	listint_t *b = head;

	while (b && a < index)
	{
		b = b->next;
		a++;
	}

	return (b ? b : NULL);
}
