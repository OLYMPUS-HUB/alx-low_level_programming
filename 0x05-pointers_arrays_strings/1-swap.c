#include "main.h"

/**
 * swap_int - swaps the values of the intergers
 * @a: int a
 * @b: int b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int p = *a;

	*a = *b;
	*b = p;
}
