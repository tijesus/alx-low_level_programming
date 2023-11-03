#include "main.h"
#include <string.h>
/**
 * _realloc - rellocating memory block
 * @ptr: pointer to array
 * @old_size: the old size of the block
 * @new_size: the new size of the block
 * Return: void
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *new_ptr, *old_ptr = ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	else if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
		new_size = old_size;
	for (i = 0; i < new_size; i++)
		new_ptr[i] = old_ptr[i];
	free(ptr);
	return (new_ptr);
}
