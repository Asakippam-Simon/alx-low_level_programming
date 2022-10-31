#include "main.h"

/**
 * _memcpy - copy memory location.
 * @dest: copy to
 * @src: copy from
 * @n: number of bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
