#include "function_pointers.h"

/**
 * print_name - function to print name
 * @name: name to print 
 * @f: pointer to another function
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}