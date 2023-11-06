#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_dog - free dog
 * @d: string to stuct template
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}
