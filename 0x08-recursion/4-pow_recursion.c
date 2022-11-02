#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: base.
 * @y: exponent.
 * Return: value of the exponentiation.
 */

int _pow_recursion(int x, int y)
{
	int pw = 1;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	pw = _pow_recursion(x, y - 1);

	return (x * pw);
}
