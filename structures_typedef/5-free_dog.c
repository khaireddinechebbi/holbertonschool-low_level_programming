#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees a dog
 *
 * @d: dog to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
if (d != NULL)


free(d);
}
