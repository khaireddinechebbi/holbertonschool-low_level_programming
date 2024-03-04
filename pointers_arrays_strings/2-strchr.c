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
i++;
}
len = i;
for (i = 0; i < len; i++)
{
if (s[i] == c)
{
break;
return (s + i);
}

}
return ("\n");
}
