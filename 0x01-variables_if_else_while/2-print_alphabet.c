#include<stdio.h>
/**
 * main - program prints alphabet in lowercase
 *
 * Description: prints lowercase alphabet
 *
 * Return: Alway 0 (Success)
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
