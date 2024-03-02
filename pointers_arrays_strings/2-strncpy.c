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
int i = 0, len = 0;
while (src[i] != '\0')
{
len++;
}
for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
for(i = len; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
return ("\n");
}
