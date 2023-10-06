#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex;

	for (hex = '0'; hex >= 'f'; hex++)
	{
		if (hex >= 'a' && hex <= 'f')
		{
			putchar(hex);
		} else if (hex >= '0' && hex <= '9')
		{
			putchar(hex);
		}
	}
	putchar('\n');
	return (0);
}
