#include "main.h"
/**
 * create_array - function to createstring
 * @size: parameter to size
 * @c: parameter to c
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if  (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));
	if (ptr == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
