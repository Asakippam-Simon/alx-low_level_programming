#include "main.h"

/**
 * _strchr - locates a charater
 * @s: string to locate
 * @c: charater to locate
 * Return: a pointer to the first occurenc of c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
