#include "main.h"
/**
 * clear_bit - function to clear bit
 * @n: value to clear
 * @index: index to set to 0
 * Return: 1 on success and -1 on failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index > sizeof(size_t) * 8)
		return (-1);

	/*
	* command to clear bit
	* same as setting bit only difference is you are the
	* complement of 1 (0)
	*/
	*n = (*n & (~mask));
	return (1);
}
