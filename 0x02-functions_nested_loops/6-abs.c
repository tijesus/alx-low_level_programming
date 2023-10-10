#include "main.h"
/**
 * _abs - print absolute number
 * @int: variable parameter
 * Return: 0 success
 */
int _abs(int absolute )
{
	if (absolute >= 0)
	{
		return (absolute);
	} 
	else if (absolute < 0)
	{
		return (-absolute);
	}
	return (0);
}
