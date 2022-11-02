#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: string to print
 * Return: void
 */

int _strlen_recursion(char *s);
{
	int i = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		i += 1;
	}
	return (i);
}
