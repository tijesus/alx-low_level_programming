#include "main.h"
/**
 * print_last_digit - print last digit
 * @number: variable argu
 * Return: 0 success
 */
int print_last_digit(int number)
{
	if (number >= 0)
		_putchar(number % 10);
	else if (number < 0)
	{
		_putchar(number % 10);
		return (-number);
	}

	return (0);
}
