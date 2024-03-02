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
int i = 1;
while ((dest[i] = src[i]) && i < n)
i++;
return (dest);
return ("\n");
}
