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
int i, j, l1 = 0, l2 = 0;
char *s;

if (s1 == NULL || s2 == NULL)
return (NULL);

while (s1[l1])
l1++;
while (s2[l2])
l2++;
s = malloc(sizeof(char) * (l1 + l2 + 1));
if (s == NULL)
return (NULL);

for (i = 0; i < l1; i++)
{
s[i] = s1[i];
}
for (j = 0; j < l2; j++)
{
s[i + j] = s2[j];
}
s[l1 + l2] = '\0';
return (s);
}
