#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int value;

	for (value = 0; value < 10; value++)
	{
		putchar(value + '0');
	}
	putchar('\n');
	return (0);
}
