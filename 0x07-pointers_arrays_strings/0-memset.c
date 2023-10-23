#include "main.h"
/**
 * _memset - function to fill memory
 * @s: pointer to s
 * @b: filler
 * @n: number of set
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
