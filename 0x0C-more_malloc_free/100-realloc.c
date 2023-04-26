#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer to the memory
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	char *point;
	char *old_point;
	unsigned int a;

	if (new_size == old_size)
		return (point);

	if (new_size == 0 && point)
	{
		free(point);
		return (NULL);
	}

	if (!point)
		return (malloc(new_size));

	point = malloc(new_size);
	if (!point)
		return (NULL);

	old_point = ptr;

	if (new_size < old_size)

	{
		for (a = 0; a < new_size; a++)
			point[a] = old_point[a];
	}

	if (new_size > old_size)

	{
		for (a = 0; a < old_size; a++)
			point[a] = old_point[a];
	}

	free(ptr);
	return (point);
}
