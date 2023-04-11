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
	int i;
	int n;
	int sum;
	char *indicate;

	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[a], &indicate, 10);
		sum = sum + n;

		if (*argv[i] < '0')

		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

