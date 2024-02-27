#include "main.h"
/**
* _strlen - prints lenght of a string
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
