#include "variadic_functions.h"
/**
 * print_strings - print string
 * @separator: seperator for strings
 * @n: number of strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *va;

	va_list str_list;

	va_start(str_list, n);

	for (i = 0; i < n; i++)
	{
		va = va_arg(str_list, char *);
		if (va)
			printf("%s", va);
		else
			printf("(nil)");

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str_list);
}
