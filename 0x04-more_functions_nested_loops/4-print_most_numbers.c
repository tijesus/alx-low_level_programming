#include "main.h"
/**
 * print_most_numbers - print numbers except 2 and 4
 */
void print_most_numbers(void)
{
	int value;

	for (value = 0; value <= 9; value++)
	{
		if (value != 2 && value != 4)
		{
			_putchar(value + '0');
		}
	}
	_putchar('\n');
}
