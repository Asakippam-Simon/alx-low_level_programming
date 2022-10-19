#include "main.h"

/**
 * int _isalpha(int c) - checks for lowercase character.
 *@c: the charater to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
}
