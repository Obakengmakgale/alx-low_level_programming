#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 if string is palindrome, 0 if not
 */

int is_palindrome(char *s)

{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns length of string
 * @s: string
 * Return: leng of string
 */

int _strlen_recursion(char *s)

{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks characters for palindrome
 * @s: string
 * @i: iterator
 * @len: length of string
 * Return: 1 if string is palindrome, 0 if not
 */

int check_pal(char *s, int i, int len)

{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
