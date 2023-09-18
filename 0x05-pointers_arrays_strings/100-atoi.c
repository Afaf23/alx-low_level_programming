#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
	{
	int i, c, n, j, f, a;

	i = 0;
	c = 0;
	n = 0;
	j = 0;
	f = 0;
	a = 0;

	while (s[j] != '\0')
		j++;

	while (i < j && f == 0)
	{
		if (s[i] == '-')
			++c;

		if (s[i] >= '0' && s[i] <= '9')
		{
			a = s[i] - '0';
			if (c % 2)
				a = -a;
			n = n * 10 + a;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
	}
