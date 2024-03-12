#include "main.h"
#include <stdlib.h>
/**
*/
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, k;
char *s;

if (s1 == NULL || s2 == NULL)
return (NULL)
while (s1[i])
i++;

while (s2[j])
j++;

s = malloc(sizeof(char) * ((i + 1) + (j + 1)));
i = 0;
j = 0;
for (k = 0; s1[i] != '\0'; k++, i++)
{
s[k] = s1[i];
}
for (; s2[j] != '\0'; k++, j++)
{
s[k] = s2[j];
}

return (s);
}
