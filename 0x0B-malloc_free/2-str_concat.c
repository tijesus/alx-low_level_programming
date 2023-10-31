#include "main.h"
/**
 * str_concat - concatenate 2 strings
 * @s1: pointer to string one
 * @s2: pointer to string two
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len = 0, i = 0, j;

	while (s1[len] != '\0')
	{
		len++;
	}
	while (s2[i] != '\0')
	{
		i++;
		len++;
	}
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = (char *)(malloc((len + 1) * sizeof(char)));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; i < len; j++, i++)
	{
		ptr[i] = s2[j];
	}

	ptr[i] = '\0';

	return (ptr);
}
