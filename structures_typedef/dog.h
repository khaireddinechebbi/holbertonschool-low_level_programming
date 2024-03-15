#ifndef DOG_H
#define DOG_H
/**
* struct dog - struct
* @name: char *
* @age: float
* @owner: char *
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} my_dog;

/* Function prototype */

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
