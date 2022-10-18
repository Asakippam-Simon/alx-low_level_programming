include "main.h"

/**
 * print_alphabet - Prints lowercase alphabet
 *
 * Description: prints lowercase alphabet
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
