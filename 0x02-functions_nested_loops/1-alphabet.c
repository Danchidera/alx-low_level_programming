#include "main.h"
/**
 * main - Entry point
 * Description:'Print_alphabet - Make alphabets'
 * Return: void
 */
void print_alphabet(void)
{
	char l;
	
	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
