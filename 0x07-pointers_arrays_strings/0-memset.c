#include "main.h"

/**
 * _memset - fill memory area.
 * @s: pointer to return.
 * @b: constant byte.
 * @n: number of bytes of memory to fill.
 * Return: Aways 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
