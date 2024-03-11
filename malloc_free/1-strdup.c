#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* *_strdup - returns a pointer to a newly allocated space in memory
* @str: string
* Return: str
*/
char *_strdup(char *str)
{
char *s;
int i;
s = malloc(sizeof(char) * sizeof(str));
if (str == 0 || s == 0)
return ('\0');
else
{
for (i = 0; str[i] != '\0'; i++)
{
s[i] = str[i];
}
}
return (s);
}
