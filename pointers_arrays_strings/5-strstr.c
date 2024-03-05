#include "main.h"
/**
* *_strpbrk - locates a substring
* @haystack: string
* @needle: string
* Return: haystack
*/
char *_strstr(char *haystack, char *needle)
{
int i;
while (*haystack)
{
i = 0;
if (haystack[i] == needle[i])
do {
if (needle[i + 1] == '\0')
return (haystack);
i++;
} while (haystack[i] == needle [i]);
haystack++;
}
return ('\0');
}
