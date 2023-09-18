#include "main.h"
/**
  * puts_half - Prints half of a string
  * @str: The string to print
  *
  * Return: void
  */
void puts_half(char *str)
	{
	int c, n, i;

	c = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	if (c % 2 == 0)
	{
		for (i = c / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (c % 2)
	{
		for (n = (c - 1) / 2; n < c - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
	}
