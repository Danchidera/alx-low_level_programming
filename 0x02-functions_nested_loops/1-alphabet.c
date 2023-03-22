#include "main.h"
/**
 * main - Entry point
 * Description:'prints lowercase alphabets'
 * Return: always 0
 */
void print_alphabet(void)
{
	int n;

	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
