#include "main.h"
/**
 * _isdigit - prints out digit
 * @c: parameter arguement
 * Return: 1 for success and 0 for otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
