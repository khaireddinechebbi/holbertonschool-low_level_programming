#include "dog.h"

/**
* init_dog - initialize a variable of type struct dog
* @d: struct dos pointer
* @name: name
* @age: age
* @owner: the identification of dog owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
