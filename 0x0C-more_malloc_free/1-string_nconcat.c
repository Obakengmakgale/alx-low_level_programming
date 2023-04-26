#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: number of bytes
 * Return: pointer to resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *str;
	unsigned int i = 0, k = 0, con1 = 0, con2 = 0;

while (s1 && s1[con1])
con1++;
while (s2 && s2[con2])
con2++;

if (n < con2)
	str = malloc(sizeof(char) * (con1 + n + 1));
else
	str = malloc(sizeof(char) * (con1 + con2 + 1));

if (!str)
	return (NULL);

while (i < con1)
{
	str[i] = s1[i];
	i++;
}

while (n < con2 && i < (con1 + n))
str[i++] = s2[k++];

while (n >= con2 && i < (con1 + con2))
str[i++] = s2[k++];

	str[i] = '\0';

	return (str);
}
