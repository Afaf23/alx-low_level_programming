#include "main.h"

/**
*print_numbers - print 0123456789
*Return: void
*/

void print_numbers(void)
{
	int number = 48;
	
	for (number = 48; number < 58; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
