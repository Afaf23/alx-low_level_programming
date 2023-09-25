#include "main.h"
/*
 * _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @s: pointer to start of memory area
 * @b: constant byte to fill with
 * @n: num bytes to fill in
 * Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
		{
			unsigned int i;
			char *j = s;

			for (i = 0; i < n; i++)
				j[i] = b;


			return (j);
		}

