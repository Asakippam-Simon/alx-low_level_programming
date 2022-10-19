#include "main.h"

/**
 * print_alphabet_x10 - Prints lowercase alphabet
 *
 * Description: prints lowercase alphabet
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
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
}
