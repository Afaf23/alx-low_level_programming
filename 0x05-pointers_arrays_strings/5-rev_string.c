#include "main.h"
/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
	{
	char rvs;
	int i, n, c;

	n = 0;
	c = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	c = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		rvs = s[i];
		s[i] = s[c];
		s[c--] = rvs;
	}
	}
