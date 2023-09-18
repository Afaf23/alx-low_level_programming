#include "main.h"
/**
  * puts2 - Prints every other character of a string
  * @str: The string to be treated
  *
  * Return: void
  */
void puts2(char *str)
	{
	int c, n;

	c = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	for (n = 0; n < c; n += 2)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
	}
