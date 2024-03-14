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

#endif

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
