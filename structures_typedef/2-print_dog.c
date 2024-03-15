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
d->name ? printf("Name: %s\n", d->name) : printf("nil\n");
printf("Age: %f\n", d->age);
d->owner ? printf("Owner: %s\n", d->owner) : printf("nil\n");
}
}
