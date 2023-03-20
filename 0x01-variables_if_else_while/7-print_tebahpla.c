#include <stdio.h>
/**
 * main - Entry point
 * Description:'print lower case alphabets in reverse'
 * Return: always 0
 */
int main(void)
{
	int lc = 122;

	while (lc >= 97)
	{
		putchar(lc);
		lc--;
	}
	putchar('\n');
	return (0);
}
