#include <stdio.h>
/**
 * main - Entry point
 * Description:'print numbers of base 16'
 * Return: always 0
 */
int main(void)
{
	int num;
	int alp;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	for (alp = 97; alp <= 102; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
