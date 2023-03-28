#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the string to be printed in reverse
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;

	for (; s[i] != '\0'; i++)
	{
		for (i -= 1; i  >= 0; i--)
		{
		putchar(s[i]);
		}
		putchar('\n');
	}
}
