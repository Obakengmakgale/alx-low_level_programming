#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: arguments
 * Return: always 0
 */

int main(int argc, char **argv)

{
	int i, n, sum = 0;
	char *indicate;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &indicate, 10);
	}

	if (*indicate)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		sum += n;
	}
	return(0);
}
