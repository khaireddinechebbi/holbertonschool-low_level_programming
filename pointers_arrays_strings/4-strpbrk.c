#include "main.h"
/**
* *_strpbrk - searches a string for any of a set of bytes
* @s: string
* @accept: string
* Return: s
*/
char *_strpbrk(char *s, char *accept)
{
char *p;
while (*s)
{
p = accept;
while (*p)
{
if (*s == *p)
return (s);
p++;
}
s++;
}
return ("nil");
}
