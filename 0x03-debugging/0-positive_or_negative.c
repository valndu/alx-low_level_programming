#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative - to print posive or negative integer
 *@i: intger number 
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return;
}
