#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int num0, num1, num2;

	for (num0 = 0; num0 <= 9; num0++)
	{
		for (num1 = num0 + 1; num1 <= 9; num1++)
		{
			for (num2 = num1 + 1; num2 <= 9; num2++)
			{
				putchar(num0 + '0');
				putchar(num1 + '0');
				putchar(num2 + '0');
					if (!(num0 == 7 && num1 == 8 && num2 == 9))
					{
						putchar(',');
						putchar(' ');
					}

			}
		}
	}
	putchar('\n');
	return (0);
}
