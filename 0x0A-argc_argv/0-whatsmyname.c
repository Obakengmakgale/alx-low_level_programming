#include <stdio.h>
#include "main.h"

/**
 * main - prints its name
 * @argc: number of arguements
 * @argv: array of arguments
 *
 * Return: always 0
 */

int main(int argc, char **argv)

{
	(void) argc;

	printf("%s\n", *argv);

	return (0);
}
