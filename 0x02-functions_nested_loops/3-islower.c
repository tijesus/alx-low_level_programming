#include "main.h"
/**
 * _islower - Checking if a character is lower case
 * @c: variable arguement passed
 * Return: 1 for true and 0 for false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else
		return (0);
}
