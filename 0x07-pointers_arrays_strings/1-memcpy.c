#include "main.h"
/**
 * _memcpy - copys n bytes of memory
 *
 * @dest: pointer to dest str
 * @src: source to be copied from
 * @n: num bytes to copy from src
 *
 * Return: pointer to beginning of memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
		{
			unsigned int i;
			char *past = dest;
			char *copy = src;

			for (i = 0; i < n; i++)
				past[i] = copy[i];
			return (dest);
		}
