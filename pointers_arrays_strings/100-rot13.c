#include "main.h"
/**
* *rot13 - change alphabet by numners
* @s: string
* Return: s successful
*/
char *rot13(char *s)
{
int i, j;
char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *rt = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; alpha[j] != '\0'; j++)
{
if (s[i] == alpha[j])
{
s[i] = rt[j];
break;
}
}
}
return (s);
}
