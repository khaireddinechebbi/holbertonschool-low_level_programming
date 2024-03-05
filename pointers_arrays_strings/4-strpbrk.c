#include "main.h"
/**
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
return (0);
}
