#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @cs: Thr string to be printed
 */

voids _put_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	     _putchar('\n');
}

