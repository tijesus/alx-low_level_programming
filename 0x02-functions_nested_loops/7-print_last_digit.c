#include "main.h"
/**
 * print_last_digit - print last digit
 * @number: variable argu
 * Return: 0 success
 */
int print_last_digit(int number)
{
	int lastDigit;

	lastDigit = number % 10;

	if (number < 0)
	{
		lastDigit = -lastDigit;
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
	return (0);
}
