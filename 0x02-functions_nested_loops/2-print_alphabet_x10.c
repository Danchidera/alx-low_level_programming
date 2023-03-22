#include "main.h"
/**
 * main - Entry point
 * Description:'prints lowercase alphabets 10 times'
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	for (i = 1; i <= 10; i++;)
	{
		for (k = 97; k <= 122; k++;)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
