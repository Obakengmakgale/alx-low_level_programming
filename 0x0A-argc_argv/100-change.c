#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main -  prints the minimum number of coins to make change
 * @argc: arguments
 * @argv: array
 * Return: 0 for success and 1 for error
 */

int main(int argc, char *argv[])

{
	int a, b, c;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	c = 0;

	if (a < 0)
	{
		printf("0\n");
		return (0);
	}

	for (b = 0; b < 5 && a >= 0; b++)
	{
		while (a >= coins[b])
		{
			c++;
			a -= coins[b];
		}
	}
	printf("%d\n", c);
	return (0);
}
