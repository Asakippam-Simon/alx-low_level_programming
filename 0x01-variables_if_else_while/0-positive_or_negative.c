#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is postive %d\n", n);
	if (n == 0)
		printf("is zero %d\n", n);
	if (n < 0)
		printf("is negative %d\n", n);
	return (0);
}
