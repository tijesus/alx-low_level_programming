#include "main.h"
/**
 * *rot13 - rot13 encoding
 * @a: pointer parameter
 * Return: char
 */
char *rot13(char *a)
{
	int i, j;
	char k[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char l[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{


		for (j = 0; k[j] != '\0'; j++)
		{
			if (a[i] == k[j])
			{
				a[i] = l[j];
				break;
			}
		}
	}
	return (a);
}
