#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - structure for dog
 * @name: dog;s name
 * @age: dog's age
 * @owner: owner of the dog
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dg;

#endif
