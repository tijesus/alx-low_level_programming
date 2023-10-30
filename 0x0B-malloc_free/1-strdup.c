#include "main.h"
/**
 * _strdup - function to return pointer to newly allocated space
 * @str: pointer to string
 * Return: char
 */
char *_strdup(char *str)
{
	char *ptr;
	int len = 0, j;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
	{
		len++;
	}

	ptr = malloc((len * sizeof(char)) + 1);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		ptr[j] = str[j];

	ptr[j] = '\0';

	return (ptr);
}
