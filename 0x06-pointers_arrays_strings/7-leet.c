#include "main.h"
/**
 * leet - encodeing string
 * @s: pointer
 * Return: char
 */
char *leet(char *s)
{
	int i, j;
	char k[] = "aeotlAEOTL";
	char l[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; k[j] != '\0'; j++)
			if (s[i] == k[j])
				s[i] = l[j];
	}
	return (s);
}
