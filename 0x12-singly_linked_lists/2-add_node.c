#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: double pointer
 * @str: string to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *string;
	unsigned int a = 0;

	while (str[a])
		a++;

	string = malloc(sizeof(list_t));
	if (!string)
		return (NULL);

	string->str = strdup(str);
	string->len = a;
	string->next = (*head);
	(*head) = string;

	return (*head);
}
