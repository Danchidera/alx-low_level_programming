#include <stdio.h>
/**
 * main - Entry point
 *
 * Return Always 0 (Success)
 */
int main(void)
{
	char a;
	int num;
	long int long_int;
	long long int longlongint;
	float f;

	printf("Size of a char:%ld byte(s)\n", sizeof(a));
	printf("Size of an int:%ld byte(s)\n", sizeof(num));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long_int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longlongint));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));

	return (0);
}
