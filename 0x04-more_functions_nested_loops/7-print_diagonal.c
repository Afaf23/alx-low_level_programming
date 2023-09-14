#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: An input integer
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int linenum;
	int linelen;

	for (linenum = 0; linenum < n; ++linenum)
	{
		for (linelen = 0; linelen < linenum; ++linelen)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
