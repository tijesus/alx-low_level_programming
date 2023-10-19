#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: pointer to a
 * @n: value
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int c;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		c = a[i];
		a[i] = a[j];
		a[j] = c;
	}

}
