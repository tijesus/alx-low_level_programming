#include "main.h"
/**
 * _pow_recursion - function to calculate raised to power
 * @x: value of character
 * @y: value raised to power
 * Return: 0 succcess
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

