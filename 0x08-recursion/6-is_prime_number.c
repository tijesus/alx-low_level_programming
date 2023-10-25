#include "main.h"
/**
 * _prime - print prime number
 * @a: first value
 * @b: second value
 * Return: 0 success
 */
int _prime(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
		return (0);
	else if (a == b)
		return (1);
	return (_prime(a, b + 1));
}

/**
 * is_prime_number - check if the number is a prime number
 * @n: numberto check
 * Return: 0 success
 */
int is_prime_number(int n)
{
	return (_prime(n, 2));
}
