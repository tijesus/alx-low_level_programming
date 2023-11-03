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
	unsigned char *new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr = malloc(old_size);
	if (ptr == NULL)
		return (NULL);

	new_ptr = (void *)realloc(ptr,new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
	{
		memcpy(new_ptr,ptr,old_size);
	} else {
		memcpy(new_ptr, ptr, new_size);
	}
	free(ptr);
	return (new_ptr);
}
 