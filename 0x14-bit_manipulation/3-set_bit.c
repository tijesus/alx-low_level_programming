#include "main.h"
/**
 * set_bit - function to set bits
 * @n: pointer to number
 * @index: position to set value
 * Return: 1 on success 0r -1 if error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index > sizeof(size_t) * 8)
		return (-1);

	*n = ((*n) | mask);
	return(1);
}
