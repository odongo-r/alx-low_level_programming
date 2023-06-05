#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 *@a: input
 *@size: inpue
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, k;

	sum1 = 0;
	sum2 = 0;

	for (k = 0; k < size; k++)
	{
		sum1 = sum1 + a[k * size + k];
	}

	for (k = size - 1; k >= 0; k--)
	{
		sum2 += a[k * size + (size - k - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
