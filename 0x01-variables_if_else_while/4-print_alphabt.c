#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' && alphabet != 'e' && alphabet != 'q';  alphabet++)
	{
		putchar(alphabet);
		continue;
	}
	putchar('\n');
	return (0);
}
