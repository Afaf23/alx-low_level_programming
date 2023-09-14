#include "main.h"

/**
 * print_numbers - print numbers 0 through 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
}
