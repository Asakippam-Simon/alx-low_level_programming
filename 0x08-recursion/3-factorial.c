#include "main.h"

/**
 * factorial - returns a factorial
 * @n: a given number
 * Return: the results
 */

int factorial(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
