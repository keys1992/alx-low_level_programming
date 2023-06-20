#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: checks the number
 * Return: 1 if the num is positive, -1 if it is negative or zero if it is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
