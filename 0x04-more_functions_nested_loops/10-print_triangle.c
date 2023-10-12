#include "main.h"

/**
  * print_triangle - Print a trianglel.
  * @size: numbers of lines.
  */

void print_triangle(int size)
{
	int a, i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
		for (i = 1; i <= size; i++)
		{
			for (a = size - i; a > 0; a--)
				_putchar(' ');
			for (j = i; j > 0; j--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}
