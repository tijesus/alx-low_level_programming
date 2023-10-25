#include "main.h"
/**
 * _strlen_recursion - return length of string
 * @s: string to pointer
 * Return: 0 success
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
