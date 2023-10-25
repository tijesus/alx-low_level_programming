#include "main.h"
/**
 * _sqrt - square root
 * @a: value
 * @b: square root
 */
int _sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b * b > a)
		return (-1);
	return (_sqrt(a, b + 1));

}

/**
 * _sqrt_recursion - square root of natural number
 * @n: number of natural number
 * Return: 0 success
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
