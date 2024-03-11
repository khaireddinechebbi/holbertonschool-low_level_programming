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

if (str == NULL)
return (NULL);

while (str[j])
{
j++;
}
s = malloc(sizeof(char) * (j + 1));
if (s == NULL)
return (NULL);
else
{
for (i = 0; str[i] != '\0'; i++)
{
s[i] = str[i];
}
}
return (s);
}
