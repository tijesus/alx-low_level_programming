#include "main.h"
/**
 * _isalpha - check characters for alphabet
 * @c: variable arguement
 * Return: 0 success
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	} else
		return (0);
}
