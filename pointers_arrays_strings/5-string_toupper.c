#include "main.h"
/**
* *string_toupper - change lowercse to uppercase
* @s: string
* Return: s
*/
char *string_toupper(char *s)
{
int i = 0, n = 0;
while (s[i])
{
n++;
}
for (i = 0; i < n; i++)
{
if (s[i] <= 'z' && s[i] >= 'a')
{
s[i] = s[i] - 32;
}
}
return (s);
}
