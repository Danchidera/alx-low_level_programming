#include "main.h"
/**
 * print_numbers -  prints the numbers, from 0 to 9
 * followed by a new line
 *
 * Return: always 0
 */
void print_numbers(void)
{
	int i;

	i = 48;
	while (i >= 48 && i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
