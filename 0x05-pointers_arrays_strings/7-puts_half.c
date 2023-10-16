 #include "main.h"
/**
 * puts_half - prnt last half of a strng
 * @str: pointer
 */
void puts_half(char *str)
{
	int length_of_the_string = 0;
	int i, n;

	for (i = 0; str[i] != '\0'; i++)
		length_of_the_string++;

	n = ((length_of_the_string - 1) / 2);

	for (i = n + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
