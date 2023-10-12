#include "main.h"
/**
 * print_diagonal - printing diagonal line
 * @n: parameter 
 */
void print_diagonal(int n)
{
	int j, k;

	for (j = 0; j < n; j++)
	{
		for (k = 0; k < j; j++)
		{
			_putchar(' ');
		}
		_putchar('\\' + n);
		_putchar('\n');
	}
}
