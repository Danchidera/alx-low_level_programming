#include "main.h"
/**
 * _absolut value: computes the absolute value of a
 * integer.
 *
 * Return: absolute value
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
