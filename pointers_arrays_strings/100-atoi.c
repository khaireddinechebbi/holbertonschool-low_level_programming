#include "main.h"
/**
*/
int _atoi(char *s)
{
int i;
for (i = 0; s[i] != ';'; i++)
{
if (s[i] <= 9 + '0' && s[i] >= '0')
if (s[i] == '-')
s[i] *= -1;
_putchar(s[i]);
}
return (0);
}
