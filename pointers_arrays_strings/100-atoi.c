#include "main.h"
/**
* _atoi - print numbers only
* @s: string
* Return: 0 if no numbers
*/
int _atoi(char *s)
{
int i = 0, j = 1;
unsigned int r = 0;
int len;
while (s[i] != '\0')
{
i++;
}
len = i;
for (i = 0; i < len; i++)
{
if (s[i] == 45)
{
j *= -1;
}
if (s[i] <= '9' && s[i] >= '0')
{
r *= 10;
r += s[i] - 48;
}
if (s[i] == ';')
{
break;
}
}
r *= j;
return (r);
return ('\n');
}
