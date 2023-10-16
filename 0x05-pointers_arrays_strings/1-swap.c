#include "main.h"
/**
 * swap_int - swap two degits
 * @a: pointer to a
 * @b: pointer to b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;
	
	c = *a;

	*a = *b;
	*b = c;
}
