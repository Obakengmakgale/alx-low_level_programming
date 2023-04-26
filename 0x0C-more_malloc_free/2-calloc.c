#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory
 * @s: area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * *_calloc - allocates memory for array
 * @nmemb: number of elements in array
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *point;

	if (nmemb == 0 || size == 0)
		return (NULL);

	point = malloc(size * nmemb);

	if (point == NULL)
		return (NULL);

	_memset(point, 0, nmemb * size);

	return (point);
}
