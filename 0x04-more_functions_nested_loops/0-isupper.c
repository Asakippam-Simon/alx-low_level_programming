#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: character to return
 * Return: 1 if upper, 0 otherwise
 */

int _isupper(int c)
{
	char ch;

	if (ch >= 'A' && ch <= 'Z')
		_putchar('1');
	else
		_putchar('0');

	_putchar('\n');
}
