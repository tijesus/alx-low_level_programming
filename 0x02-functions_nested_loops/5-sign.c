#include "main.h"
/**
 * print_sign - print out the +ve or -ve
 * @n: variale argument
 * Return: 0 or + or -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
