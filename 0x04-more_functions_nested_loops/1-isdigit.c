#include "main.h"
/**
 * isdigit - prints out digit
 * @c: parameter arguement
 * Return: 0 success
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
