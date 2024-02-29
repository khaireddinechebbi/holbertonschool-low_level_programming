#include "main.h"
/**
* _atoi - print numbers only
* @s: string
*/
int _atoi(char *s)
{
int i, j = 0;
for (i = 0; s[i] != ';'; i++)
{
if (s[i] == '-')
{
j += 1;
}
if (j % 2 != 0)
_putchar('-');
if (s[i] <= 57 && s[i] >= 48)
_putchar(s[i] + '0');
}
return (0);
}
