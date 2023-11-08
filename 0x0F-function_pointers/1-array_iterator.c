#include "function_pointers.h"
/**
 * array_iterator - functions that execute function
 * @array: array of functions
 * @size: size of array
 * @action: pointer to action to take on execution
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;

    if (action != NULL && array != NULL)
    {
        for (i = 0; i < size; i++)
            action(array[i]);
    }
}