#include <stdlib.h>
#include "main.h"

/**
 * -calloc - allocates memory for an array, using malloc
 *  @nmemb: number of numbers
 *  @size: size
 *
 *  Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int k = 0, m = 0;
	char *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	m = nmemb * size;
	s = malloc(m);

	if (s == NULL)
	{
		return (NULL);
	}
	while (k < m)
	{
		s[k] = 0;
		k++;
	}
	return (s);
}
