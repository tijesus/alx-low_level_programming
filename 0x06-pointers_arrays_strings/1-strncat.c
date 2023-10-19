#include "main.h"
/**
 * _strncat - concatenatng strings
 * @dest: destination
 * @src: source
 * @n: integer arg
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destlen = 0;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[destlen + i] = src[i];
		src++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}
