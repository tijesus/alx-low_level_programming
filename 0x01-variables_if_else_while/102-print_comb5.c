#include <stdio.h>
/**
 * main -Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit0, digit1;

	for (digit0 = 0; digit0 <= 9; digit0++)
	{
		for (digit1 = digit0 + 0; digit1 <= 9; digit1++)
		{
			putchar((digit0 / 10) + '0');
			putchar((digit0 % 10) + '0');
			putchar(' ');
			putchar((digit1 / 10) + '0');
			putchar((digit1 % 10) + '0');
					if (!(digit0 == 9 && digit1 == 9))
					{
						putchar(',');
						putchar(' ');
					}
		}
	}
	putchar('\n');
	return (0);
}
