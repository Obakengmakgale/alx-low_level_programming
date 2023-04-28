#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: pointer
 */

void free_list(list_t *head)

{
	list_t *a;

	while (head)

	{
		a = head->next;
		free(head->str);
		free(head);
		head = a;
	}
}
