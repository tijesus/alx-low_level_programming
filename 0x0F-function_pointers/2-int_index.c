#include "function_pointers.h"
#include <ctype.h>
/**
 * int_index - check if its integer
 * @array: array to function
 * @size: size of function
 * @cmp: comparing pointer to a function
 * Return: cmp success
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= -1 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
		if (isdigit(cmp(array[i])) == 0)
			cmp(array[i]);
		else if ((cmp(array[i])) < 0)
			cmp(array[i]);
		else
			return (-1);
	}
	return (cmp(array[i]));
}
