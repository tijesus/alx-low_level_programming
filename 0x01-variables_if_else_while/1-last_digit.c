#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastDIgit = n % 10
		;
	printf("Last digit of %d is ");

	if (n > 5)
	{
		printf("%d and is greater than 5 ");
	} else if (n < 6 && != 0)
	{
		printf("%d and is less than 6 and not 0 ");
	} else
		printf("%d and is 0 ");

	return (0);
}
