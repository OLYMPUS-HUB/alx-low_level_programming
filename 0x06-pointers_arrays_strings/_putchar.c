#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: The character to point
 * Return: on success 1
 * on error, 1 is returned erno is appropriately
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
