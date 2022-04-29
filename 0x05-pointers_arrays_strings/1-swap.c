#include "main.h"

/**
 * swap_int - to swap the value of two int
 * @a: int 1
 * @b: in2
 * Return - void
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
