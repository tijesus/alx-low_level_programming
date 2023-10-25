#include "main.h"
/**
 * _check - checks the for palindrome
 * @s: pointer to string
 * @i: iterator
 * @len: length of the string
 * Return: 1 if palindrome, 0 if no
 */
int _check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (_check(s, i + 1, len - 1));
}

/**
 * _strlen - length of the string
 * @s: pointer to string length
 * Return: length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to print in reverse
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_check(s, 0, _strlen(s)));
}

