#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a sentence
 * Return: void
 */

void first(void)

{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
