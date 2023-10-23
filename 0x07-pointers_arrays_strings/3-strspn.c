#include "main.h"
#include <stdio.h>

/**
 * _strspn - print the length of substring
 * @s: pointer to string
 * @accept: pointer to bytes
 * Return: 0 success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for  (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
