#include <stdbool.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - search for integer
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to check if array matches
 * Return: Alway 0 (SUCCESS)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	bool y;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			y = cmp(array[i]);
			if (y == 1)
			{
				return (i);
			}
		}
	}
	return (-1);
}
