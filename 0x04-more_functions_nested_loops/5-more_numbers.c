#include "main.h"
/**
 * more_numbers - print multipule lines of number
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar(b / 10 + '0');
			}
				_putchar(b % 10 + '0');
		}

		_putchar('\n');
	}
}
