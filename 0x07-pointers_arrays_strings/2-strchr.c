#include <stdio.h>
#include "main.h"
/**
 * _strchr - locate character in a  string
 * @s: pointer to s
 * @c: character
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
		else if (s[i] == '\0')
			return (0);
	}
	return (0);
}
