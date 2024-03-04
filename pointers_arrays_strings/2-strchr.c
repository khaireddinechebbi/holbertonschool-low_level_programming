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
while (s[i])
{
if (s[i] == c)
break;
i++;
}
return (s[i] ? s + i : "nil");
}
