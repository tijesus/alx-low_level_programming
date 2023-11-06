#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - create new dog
 * @name: the dog name
 * @age: the dog age
 * @owner: owner
 * Reture: new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_arr = malloc(sizeof(dog_t));

	if (new_dog_arr == NULL)
		return (NULL);
	new_dog_arr->name = malloc(strlen(name) + 1);
	new_dog_arr->owner = malloc(strlen(owner) + 1);

	if (new_dog_arr->name == NULL || new_dog_arr->owner == NULL)
	{
		free(new_dog_arr->name);
		free(new_dog_arr->owner);
		free(new_dog_arr);
		return (NULL);
	}
	strcpy(new_dog_arr->name, name);
	strcpy(new_dog_arr->owner, owner);
	new_dog_arr->age = age;

	return (new_dog_arr);
}
