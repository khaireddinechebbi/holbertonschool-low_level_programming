#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
*/
char *_strdup(char *str)
{
char *s;
int i;
s = (char *)malloc(sizeof(char) * sizeof(str));
if (str == 0)
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
