#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: - pointer to the array to search from
 * @size: - size of the array
 * @value: - the value to search for
 * Return: first index where size is located in the array
 */

int binary_search(int *array, size_t size, int value)
{
    size_t i;
    size_t low = 0;
    size_t high = size - 1;
    size_t mid;

    if (array == NULL)
        return (-1);

    while (low <= high)
    {
        mid = (low + high)/2;
		printf("Searching in array: ");
        for (i = low; i <= high; i++)
			printf("%i%s", array[i], i == high ? "\n" : ", ");
            if (array[mid] == value)
                return mid;
            else if (array[mid] < value)
			low = mid + 1;
            else 
                high = mid - 1;
    }
    return (-1);
}
