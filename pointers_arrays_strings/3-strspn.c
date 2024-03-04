#include "main.h"
/**
* _strspn - gets the length of a prefix substring
* @s: string
* @accept: string
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned i = 0, n = 0;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (s[i] == accept[i])
{
n++;
break;
}
else
if (accept[i + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
