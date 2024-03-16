#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates a new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: returns pointer to buffer of datatype dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int n = 0, o = 0, i;
	dog_t *my_dog;

	while (name[n])
		n++;
	while (owner[o])
		0++;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(n * sizeof(doggy->name));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		doggy->name[i] = name[i];

	doggy->age = age;

	doggy->owner = malloc(o * sizeof(doggy->owner));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < o; i++)
		doggy->owner[i] = owner[i];
	return (doggy);
}
