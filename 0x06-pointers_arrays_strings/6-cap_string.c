#include "main.h"
/**
 * cap_string - capitalise the first letter of a word
 * @a: pointer to arrar
 * Return: void
 */
char *cap_string(char *a)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (a[i] == sep[j])
			{
				if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
				{
					a[i + 1] = a[i + 1] - 32;
				}
			}
		}
		if (i == 0 && a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
