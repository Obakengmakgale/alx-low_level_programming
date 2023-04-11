#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: second string to concatenate
 *
 * Return: concatenate of s1 and s2
 */

char *str_concat(char *s1, char *s2)

{
	char *s;
	int i, a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = a = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[a] != '\0')
		a++;

	s = malloc(sizeof(char) * (i + a + 1));

	if (s == NULL)
		return (NULL);
	i = a = 0;

	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	while (s2[a] != '\0')
	{
		s[i] = s2[a];
	}

	s[i] = '\0';
	return (s);
}
