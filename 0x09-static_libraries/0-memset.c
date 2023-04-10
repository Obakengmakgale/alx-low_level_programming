#include "main.h"

/**
 * _memset - it fills a block of memory with a value
 * @s: the starting address of memory to be filled
 * @b: it is the desired value
 * @n: it is the number of bytes to be changed
 *
 * Return: changed array with a new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)

{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
