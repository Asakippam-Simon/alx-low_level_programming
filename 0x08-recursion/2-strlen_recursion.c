#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: string to print
 * Return: void
 */

int _strlen_recursion(char *s);
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
