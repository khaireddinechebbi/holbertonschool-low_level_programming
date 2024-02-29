#include "main.h"
/**
* _atoi - print numbers only
* @s: string
* Return: 0 if no numbers
*/
int _atoi(char *s)
{
int n = 0, i, j = 0;
for (i = 0; s[i] != ';'; i++)
{
if (s[i] >= '0' && s[i] <= '9')
n = (n * 10) + s[i];
if (s[i] == '-')
j += 1;
if (j % 2 != 0)
n *= -1;
return (n);
}
return ('\n');
}
