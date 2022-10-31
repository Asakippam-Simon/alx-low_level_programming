#include "main.h"

/**
 * _strspn - gets the length of segment of s
 * @s: segment to get
 * @accept: number of bytes to get
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				n++;
				break;
			}
			else if (aceept[j + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}
