#include "variadic_functions.h"
/**
 * sum_them_all - adding all values
 * @n: argument passed
 * Return: 0 success
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list add_list;

	va_start(add_list, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(add_list, unsigned int);

	return (sum);
}
