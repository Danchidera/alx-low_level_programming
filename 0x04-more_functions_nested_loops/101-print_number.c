#include "main.h"
#include <stdio.h>

/*8
 * print_number - Prints an integer
 * @n: The integer to print
 * Return: Nothings 
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		n*= -1;
		k = n;
		_putchar('-');
		k /= 10;
		if (k != 10)
		{
			print_number(k);
		}
		_putchar((unsigned) n % 10 + '0');
	}
}
