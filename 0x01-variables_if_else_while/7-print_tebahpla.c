#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char mirror;

	for (mirror = 'z'; mirror >= 'a'; mirror--)
	{
		putchar(mirror);
	}
	putchar('\n');
	return (0);
}
