#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - printing sum of two diagonal metrix
 * @a: pointer to the arrays
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += a[i * size + i];
	}

	for (i = 0; i < size; i++)
	{
		diag2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", diag1, diag2);
}
