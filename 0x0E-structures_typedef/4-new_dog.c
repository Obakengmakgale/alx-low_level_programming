#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns length of string
 * @s: string to assess
 *
 * Return: the length of the string
 */

int _strlen(char *s)

{
	int d;
	d = 0;

	while (s[d] != '\0')
	{
		d++;
	}
	return (d);
}

/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer to the buffer
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)

{
	int len, d;
	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (d = 0; d < len; d++)
	{
		dest[d] = src[d];
	}
	dest[d] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: pointer to new dog, null otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog-> name = malloc(sizeof(char) * (len1 + 1));
	if (dog-> name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog-> owner = malloc(sizeof(char) * (len2 + 1));
	if (dog-> owner == NULL)

	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
