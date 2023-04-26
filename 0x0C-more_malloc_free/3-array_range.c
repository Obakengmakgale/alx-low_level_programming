#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: min values
 * @max: max values
 * Return: pointer to new array
 */

int *array_range(int min, int max)

{
	int *point;
	int a, b;

	if (min > max)
		return (NULL);

	b = max - min + 1;
	point = malloc(sizeof(int) * b);

	if (point == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		point[a] = min++;

	return (point);
}
