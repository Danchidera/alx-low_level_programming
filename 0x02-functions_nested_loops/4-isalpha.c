#include "main.h"
/**
 * -isalpha - shows 1 if the input is a
 *  letter, otherwise it shows 0
 *
 *  Return: 1 for letters, 0 for the rest
 */
int _islower(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <=90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
