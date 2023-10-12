#include "main.h"
/**
 * _isupper - function to return upper case
 * @c: argument passed
 * Return: 0 success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
