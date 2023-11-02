#include "main.h"
/**
 * array_range - function to create array integer
 * @min: minimum value
 * @max: maximum value
 * Return: 0 success
*/
int *array_range(int min, int max)
{
	int *ptr;
	int i, j;

	if (min > max)
		return (NULL);
	i = max - min + 1;
	ptr = malloc(sizeof(int) * i);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		ptr[j] = min + j;
	return (ptr);
}
