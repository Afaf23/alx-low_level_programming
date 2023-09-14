#include "main.h"
#include <stdio.h>
/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		n *= -1;
		k = n;
		putchar('-');
	}

	if (k != 0)
		print_number(k);

	putchar((unsigned int) n % 10  + '0');
}
