#include "main.h"
/**
* _atoi - print numbers only
* @s: string
* Return: 0 if no numbers
*/
int _atoi(char *s)
{
int i = 0, j = 1, r = 0;

while (s[i] != '\0')
{
if (s[i] >= '0' && s[i] <= '9')
{
r = r * 10 + (s[i] - '0');
i++;
}
else if (s[i] == '-')
{
j *= -1;
}
r *= j;
}
return (r);
return ('\n');
}
