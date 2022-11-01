#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: 2d array of charaters
 * Return: void
 */

void print_chessboard(char (*a)[2])
{
	int n, j;

	n = 0;
	while (n < 8)
	{
		j = 0;
		while (j < 8)
		{
			printf("%d", a[n][j]);
			j++;
		}
		printf('\n');
		n++;
	}
}
