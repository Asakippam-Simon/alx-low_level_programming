#include "main.h"

/**
 * _isdigit - checks for uppercase letters
 * @c: character to return
 * Return: 1 if upper, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
