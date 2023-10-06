#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char message;
	message = "and that piece of art is useful\" - Dora Korper, 2015-10-19\n";
	write(2, message);
	return (1);
}
