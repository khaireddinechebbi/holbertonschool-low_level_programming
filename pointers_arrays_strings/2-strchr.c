#include "main.h"
/**
* *_strchr - locates a character in a string
* @s: string
* @c: character
* Return: r
*/
char *_strchr(char *s, char c)
{
unsigned int i = 0;
while (s[i] != '\0')
{
if (s[i] != c)
i++;
else
break;
}
if (s[i] == '\0')
{
return ('nil');
}
return (s + i);
}
