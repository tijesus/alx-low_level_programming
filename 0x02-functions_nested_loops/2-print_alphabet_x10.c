#include "main.h"
/**
 * print_alphabet_x10 - print 10 lines of a-z
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int alpha10;
	char  alpha;

	for (alpha10 = 0; alpha10 < 10; alpha10++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
