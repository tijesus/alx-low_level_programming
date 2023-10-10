#include "main.h"
/**
 * int _islower - Checking if a character is lower case
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
