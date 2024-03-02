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
if (src[i] != '\0')
dest[i] = src[i];
else
break;
i++;
}
return (dest);
}
