#include "main.h"
/**
* _strcmp - compare strings
* @s1: string
* @s2: string
* Return: s1 - s2
*/
int _strcmp(char *s1, char *s2)
{
int i = 0, r;
while (s1[i] && s2[i] && s1[i] == s2[i])
{
i++;
}
r = s1[i] - s2[i];
return (r);
}
