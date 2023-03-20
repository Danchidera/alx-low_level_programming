#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints single digits numbers from 0 to 10'
 * Return: alway 0
 */
int main(void)
{
	int digits;

	for (digits = 0; digits <= 9; digits++)
	{
		printf("%d", digits);
	}
	printf("\n");
	return (0);
}
