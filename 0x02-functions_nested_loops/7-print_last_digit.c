#include "main.h"
/**
 * print_last_digit - print last digit
 * @a: output last digit
 * Return: last digits
  */
int print_last_digit(int a)
{
	int b;
	
	b = a % 10;
	if (a < 0)
	{
		b = b * -1;
	}
	_putchar(b + '0');
	return (b);
}
