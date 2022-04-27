#include "main.h"

/**
 *_sqrt_recursion -  func that returns the natural square root of a number.
 * @n: number to find sqrt of input
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (helper(n, 1));
}

/**
 * checker - Check for sqrt of n
 * @n: number
 * @i: incrementor
 * Return: -1;
 */

int checker(int n, int i)
{
	if (n == (i * i))
		return (i);
	else if (n > (i * i))
		return (checker(n, i + 1));
	else
		return (-1);
}
