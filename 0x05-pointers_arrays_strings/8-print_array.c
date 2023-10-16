#include "main.h"
#include <stdio.h>
/**
 * print_array - print out given arrays
 * @a: pointer to a
 * @n: pointer to n
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");

}
