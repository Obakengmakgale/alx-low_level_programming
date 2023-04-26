#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - returns a pointer to the allocated memory
 * @b: number of bytes to allocate
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)

{
	void *point;

	point = malloc(b);

	if (point == NULL)
		exit(98);

	return (point);
}
