#include <stdio.h>
#include "main.h"

/**
* *create_array - creat an array
* @size: size of array
* @c: char
* Return: s
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *s;
s = malloc(sizeof(char) * size);
if (s == 0 || size == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
s[i] = c;
}
return (s);
}
