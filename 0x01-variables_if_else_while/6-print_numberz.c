#include<stdio.h>
 /**
  * main - print single digit number
  *
  * Descripting: print a single digit number
  *
  * Return: Always 0 (Success)
  *
  */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
