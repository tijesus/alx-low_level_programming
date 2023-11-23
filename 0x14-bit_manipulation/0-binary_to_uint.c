#include "main.h"
/**
 * binary_to_uint - convert binary to integer
 * @b: string of binary to convert
 * Return: 0 success
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int slen;
	size_t i = 0, j = 0, total = 0, expo = 1;

	if (b == NULL)
		return (0);
	slen = strlen(b);
	if (slen == 1 && (b[0] == '0' || b[0] == '1'))
	{
		return (b[0] - 48);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
		for (j = slen - 1; j > 0; j--)
		expo = expo * 2;
		total = total + (expo * (b[i] - 48));
		slen--;
		expo = 1;
	}
	return (total);
}
