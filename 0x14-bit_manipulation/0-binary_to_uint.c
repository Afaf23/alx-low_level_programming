#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary
 * Return: the converted number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int n, binary;

	if (!b)
		return (0);
	i = 0;

	for (n = 0; b[n] != '\0'; n++)

	for (n--, binary = 1; n >= 0; n--, binary *= 2)
	{
		if (b[n] != '0' && b[n] != '1')
		{
			return (0);
		}

		if (b[n] & 1)
		{
			i += binary;
		}
	}

	return (i);
}
