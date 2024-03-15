#ifndef dog
#define dog
/**
* struct dog - struct
* @name: char *
* @age: float
* @owner: char *
*/
struct dog
{
char *name;
float age;
char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
