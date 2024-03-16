#include "dog.h"
#include <stdlib.h>
/**
* *_strcpy - copy string
* @dest: pointer
* @src: pointer
* Return: NULL
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while ((dest[i] = src[i]) != '\0')
{
i++;
}
return (dest);
}

/**
* _strlen - prints lenght of a string
* @s: string
* Return: l
*/
int _strlen(char *s)
{
int l = 0;
while (*s != '\0')
{
l++;
s++;
}
return (l);
}

/**
  * new_dog - creates a new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: returns pointer to buffer of datatype dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
int n = 0, o = 0;
dog_t *new_dog;
if (name != NULL && owner != NULL)
{
n = _strlen(name) + 1;
o = _strlen(owner) + 1;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
new_dog->name = malloc(sizeof(char) * n);
if (new_dog->name == NULL)
{
free(new_dog);
return(NULL);
}
new_dog->owner = malloc(sizeof(char) * (o + 1));
if (new_dog->owner == NULL)
{
{
free(new_dog->name);
free(new_dog);
return(NULL);
}
new_dog->name = _strcpy(new_dog->name, name);
new_dog->owner = _strcpy(new_dog->owner, owner);
new_dog->age = age;
}
return (new_dog);
}
