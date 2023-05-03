#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes c to stdout
 * @c: character to print
 * Return: 1 for success and -1 on error
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
