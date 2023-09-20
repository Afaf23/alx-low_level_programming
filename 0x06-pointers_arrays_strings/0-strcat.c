#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
	{
	int d = 0, s = 0;

	while (*(dest + d) != '\0')
	{
		d++;
	}

	while (s >= 0)
	{
		*(dest + d) = *(src + s);
		if (*(src + s) == '\0')
			break;
		d++;
		s++;
	}
	return (dest);
	}
