#include <stdio.h>
/**
 * main - Entry point
 * Description:'printa a digits from 0 to 9 using only putchar function
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
