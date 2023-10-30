#include "main.h"
/**
 * _strdup - function to return pointer to newly allocated space
 * @str: pointer to string
 * Return: char
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i = 0, j;

	ptr = malloc((i + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)

	for (j = 0; str[j] != '\0'; j++)
		ptr[j] = str[j];

	ptr[j] = '\0';

	return (ptr);
}
