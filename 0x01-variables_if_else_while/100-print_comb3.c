#include <stdio.h>
/**
 * main -Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit, ten;

	for (digit = 0; digit <= 9; digit++)
	{
		for (ten = digit + 1; ten <= 9; ten++)
		{
			putchar(digit + '0');
			putchar(ten + '0');
			if (!(digit == 8 && ten == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
