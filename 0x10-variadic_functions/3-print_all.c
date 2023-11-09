#include "variadic_functions.h"
/**
 * print_all - funtions to print things
 * @format: format to print
*/
void print_all(const char * const format, ...)
{
	int i = 0, check;
	char *str;

	va_list p_all;

	va_start(p_all, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(p_all, int));
				check = 0;
				break;
			case 'i':
				printf("%i", va_arg(p_all, int));
				check = 0;
				break;
			case 'f':
				printf("%f", va_arg(p_all, double));
				check = 0;
				break;
			case 's':
				str = va_arg(p_all, char *);
				if (str == NULL)
					str = ("(nil)");
				printf("%s", str);
				check = 0;
				break;
			default:
				check = 1;
				break;
		}
		if (format[i + 1] != '\0' && check == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(p_all);
}
