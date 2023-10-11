#include "main.h"

/**
 * times_table - dmultiplication to 9
 */

void times_table(void)
{
	int row, column, result;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			result = row * column;
			if (result < 10)
			{
				if (column > 0)
					_putchar(' ');
				_putchar('0' + result);
			}
			else
			{
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
