#include "main.h"

/**
 * swap_int - switches value of first input with the value of the second input.
 * @a: First value to swap.
 * @b: Second value to swap.
 */
void swap_int(int *a, int *b)
{
	int temp;

	swap = *a;
	*a = *b;
	*b = swap;
}
