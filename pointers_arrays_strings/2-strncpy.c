#include "main.h"
/**
* *_strncpy - copy strings
* @dest: string
* @src: string
* @n: int
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n)
{
dest[i] = src[i];
if (src[i] == '\0')
{
break;
dest[i] = '\0';
}
i++;
}
return (dest);
}
