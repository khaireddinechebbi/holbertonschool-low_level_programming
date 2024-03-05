#include "main.h"
/**
* *_strpbrk -  locates a substring
* @haystack: string
* @needle: string
* Return: haystack
*/
char *_strstr(char *haystack, char *needle)
{
int i = 0;
while (*haystack)
{
while (*haystack == needle[i])
{
return (haystack);
i++;
}
haystack++;
}
return (NULL);
}
