#include "main.h"
/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: array length
 *  @size: size of each element
 *  Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	char *f;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);

	f = m;

	for (i = 0; i < (size * nmemb); i++)
		f[i] = '\0';

	return (m);
}
