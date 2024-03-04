#include "main.h"
/**
* *_strchr - locates a character in a string
* @s: string
* @c: character
* Return: r
*/
char *_strchr(char *s, char c)
{
unsigned int i = 0, len;
while (s[i] != '\0')
{
if (s[i] == c)
break;
i++;
}
return ((s[i] != '\0')? s + i : "nil");
}
