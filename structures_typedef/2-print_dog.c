#include "dog.h"
#include <stdio.h>

/**
* print_dog - prints the struct dog
* @d: name of the structer
*/
void print_dog(struct dog *d)
{
if (d)
{
d->mame ? printf("Name:%s\n", d->name) : printf("nil\n");
d->age ? printf("Name:%f\n", d->age) : printf("nil\n");
d->owner ? printf("Name:%s\n", d->owner) : printf("nil\n");
}
}
