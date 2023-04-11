#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: width input
 * @height: height input
 *
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)

{
	int **array;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		array[x] = malloc(sizeof(int) * width);

		if (array[x] == NULL)
		{
			for (; x >= 0; x--)
				free(array[x]);

			free(array);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			array[x][y] = 0;
	}
	return (array);
}
