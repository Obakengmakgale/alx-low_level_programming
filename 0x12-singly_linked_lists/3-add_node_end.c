#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list
 * @head: double pointer
 * @str: string to be duplicated
 * Return: address of new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)

{
	list_t *string;
	list_t *a = *head;
	unsigned int b = 0;

	while (str[b])
		b++;

	string = malloc(sizeof(list_t));
	if (!string)
		return (NULL);

	string->str = strdup(str);
	string->len = b;
	string->next = NULL;

	if (*head == NULL)
	{
		*head = string;
		return (string);
	}

	while (a->next)
		a = a->next;
	a->next = string;

	return (string);
}
