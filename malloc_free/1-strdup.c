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
int i, j = 0;
while (str[j])
{
j++;
}
s = malloc(sizeof(char) * (j + 1));
if (str == NULL || s == NULL)
return (NULL);
else
{
for (i = 0; str[i] != NULL; i++)
{
s[i] = str[i];
}
}
return (s);
}
