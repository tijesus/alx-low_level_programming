#include "main.h"
/**
 * get_bit - get bit at a position
 * @n: number
 * @index: position to get bit
 * Return: index or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	/*
	* condition for index exceeding bit after converting from
	* byte to bit
	*/
	if (index > sizeof(size_t) * 8)
		return (-1);
	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
