#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: checks the number
 * Return: return absolute value or zero
 */
int _abs(int c)
{
	int abs_value;

	abs_value = c * -1;
	if (c < 0)
	{
		return (abs_value);
	}
	return (c);
}
