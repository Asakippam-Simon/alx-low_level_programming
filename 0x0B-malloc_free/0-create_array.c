#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * create_array - Creates an array of chars
 * @size:size of the array to create
 * @c: char to initiliaze the array
 * Return: pointer to the arry (SUCCESS), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *) malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (0);
	}
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	*(p + i) = '\0';
	return (p);
}
