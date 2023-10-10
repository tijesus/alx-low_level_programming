#include "main.h"
/**
 * print_alphabet - function to print_alphabet in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');

}
