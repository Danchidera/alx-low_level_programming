#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints alphabets in lower and uppercase'
 * Return: always 0
*/
int main(void)
{
	int lc = 97;
	int uc = 65;

	while (lc <= 122)
	{
		putchar(lc);
		lc++;
	}
	while (uc <= 90)
	{
		putchar(uc);
		uc++;
	}
	putchar('\n');
	return (0);
}
