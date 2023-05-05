#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: number
 * @m: number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	int a;
	int b = 0;
	unsigned long int c;
	unsigned long int d = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		c = d >> a;
		if (c & 1)
			b++;
	}
	return (b);
}
