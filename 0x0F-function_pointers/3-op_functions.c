#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - addition
 * @a: first number
 * @b: second number
 *
 * Return: 0 success
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction
 * @a: first number
 * @b: second number
 *
 * Return: 0 succcess
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: first number
 * @b: second number
 *
 * Return: 0 success
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: first number
 * @b: second number
 *
 * Return: 0 success
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - remainder
 * @a: first number
 * @b: second number
 *
 * Return: 0 success
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
