#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: the size to be allocated
 *
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *pter;

	pter = malloc(b);

	if (pter == NULL)
	{
		exit(98);
	}
	return (pter);
}
