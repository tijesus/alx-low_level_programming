#include "main.h"
/**
 * flip_bits - nflip bits
 * @n: value to be flipped
 * @m: number of flip
 * Return: muber of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tot, num;

	num = n ^ m;
	for (tot = 0; num > 0;)
	{
		if ((num & 1) == 1)
			tot++;
		num = num >> 1;
	}
	return (tot);
}
