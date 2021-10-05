#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Positiver
 *
 * if/else statement delares the sign (positive
 * or negative) of a random number. It also states if the value
 * is zero.
 *
 * Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
