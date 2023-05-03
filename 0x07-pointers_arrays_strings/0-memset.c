#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @n: number of bytes
 * @s: memory area
 * @b: constant byte
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)

{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
