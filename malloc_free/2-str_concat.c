#include "main.h"
#include <stdlib.h>
/**
* *str_concat - concatenates two strings
* @s1: string 1
* @s2: string 2
* Return: s
*/
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0;
char *s;

if (s1 == NULL || s2 == NULL)
return (NULL);

while (s1[i])
i++;

while (s2[j])
j++;

s = malloc(sizeof(char) * (i + j + 1));
if (s == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
{
s[i] = s1[i];
}
for (j = 0; s2[j] != '\0'; j++)
{
s[i + j] = s2[j];
}
s[i + j] = '\0';
return (s);
}
