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
dog_t *new_dog = malloc(sizeof(dog_t));

if (new_dog == NULL)
return (NULL);

while (name[n])
n++;

while (owner[o])
o++;

new_dog->name = malloc(sizeof(char) * (n + 1));
new_dog->owner = malloc(sizeof(char) * (o + 1));
if (new_dog->owner == NULL || new_dog->name == NULL)
{
free(new_dog->name);
free(new_dog->owner);
free(new_dog->age);
return (NULL);
}
for (i = 0; i < n; i++)
{
new_dog->name[i] = name[i];
}
for (i = 0; i < o; i++)
{
new_dog->owner[i] = owner[i];
}
new_dog->age = age;

return (new_dog);
}
