#include "main.h"
/**
 * _islower - Shows 1 if input is a
 * is a lowercase character, otherwise it 
 * 0
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
