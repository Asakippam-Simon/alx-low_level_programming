include "main.h"

/**
 * LowerCase - Prints lowercase alphabet
 *
 * Description: prints lowercase alphabet
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int i = 97;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
