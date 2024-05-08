#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: - pointer to the array to search from
 * @size: - size of the array
 * @value: - the value to search for
 * Return: first index where size is located in the array
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
