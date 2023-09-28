#include "main.h"
/**
 * _sqrt_recursion - calculates the natural square root of n.
 * @n: base number.
 *
 * Return: the square root of n.
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	if (i * i == n)
		return (i);
	else
		return (-1);
}

