#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: input
 * @av: double pointer
 * Return: always 0
 */

char *argstostr(int ac, char **av)

{
	int a, b, c = 0, d = 0;
	char *hit;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			a++;
	}
	d += ac;
	hit = malloc(sizeof(char) * d + 1);

	if (hit == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			hit[c] = av[a][b];
			c++;
		}

		if (hit[c] == '\0')
		{
			hit[c++] = '\n';
		}
	}
	return (hit);
}
