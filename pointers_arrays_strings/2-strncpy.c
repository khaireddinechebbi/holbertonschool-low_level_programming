#include "main.h"
/**
* *_strncpy - copy strings
* @dest: string
* @src: string
* @n: int
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while ((dest[i] = src[i]) && i < n)
i++;
return (dest);
return (0);
}
