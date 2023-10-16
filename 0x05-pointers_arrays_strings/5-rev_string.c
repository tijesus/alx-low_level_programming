#include "main.h"
/**
 * rev_string - printing string in reverse
 * @s: pointer to s
 */
void rev_string(char *s)
{
	int i, j;
	char hold;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	for (i = 0, j = count - 1; i < j; i++, j--)
	{
		hold = s[i];
		s[i] = s[j];
		s[j] = hold;
	}
}
