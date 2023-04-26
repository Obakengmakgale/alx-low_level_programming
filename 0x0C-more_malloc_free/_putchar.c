#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: char to print
 * Return: success 1
 * on error, return -1
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
