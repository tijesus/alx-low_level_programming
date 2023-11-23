#include "main.h"
/**
 * binary - function to print binary
 * @n: number to
 */
void binary(unsigned long int n)
{
	if (n == 0)
		return;
	binary(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}

/**
 * print_binary - print binary number
 * @n: number to convert
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		binary(n);
	}
}
