#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphaStart, alphaEnd;
	char alpha;

	alphaStart = 'a';
	alphaEnd = 'z';
	alpha = alphaStart <= alphaEnd;

	putchar(alpha);
	for (alphaStart = 'A', alphaEnd = 'Z'; alphaStart <= alphaEnd;  alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');
	return (0);
}
