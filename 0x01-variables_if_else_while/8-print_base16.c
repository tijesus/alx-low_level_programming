#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex;

	for (hex = '0'; hex >= '15'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
