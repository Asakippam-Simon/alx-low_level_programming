#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: 2d array of charaters
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int n, j;

	n = 0;
	while (n < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[n][j]);
			j++;
		}
		_putchar('\n');
		n++;
	}
}
