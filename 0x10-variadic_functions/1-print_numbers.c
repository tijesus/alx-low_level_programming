#include "variadic_functions.h"
/**
 * print_numbers - printing out numbers
 * @separator: string to show seperator
 * @n: values
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list num_list;

	va_start(num_list, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num_list, unsigned int));
		if (i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(num_list);

}
