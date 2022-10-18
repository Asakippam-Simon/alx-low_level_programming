include "main.h"
/**
 * main - entry point
 * Return: Alway 0
 */

int main(void)
{
	LowerCase(97);
}

/**
 * LowerCase - Prints lowercase alphabet
 *
 * Return: Always 0
 */

void LowerCase(void)
{
	int i = 97;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}

	_putchar('\n')
}
