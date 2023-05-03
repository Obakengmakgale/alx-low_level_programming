#include "lists.h"

/**
 * sum_listint - calculates the sum of all data in a linked list
 * @head: first node
 * Return: sum of the data or 0 if linked lis is empty
 */

int sum_listint(listint_t *head)

{
	int cal = 0;
	listint_t *a = head;

	while (a)
	{
		cal += a->n;
		a = a->next;
	}
	return (cal);
}
