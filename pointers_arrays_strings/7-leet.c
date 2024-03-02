#include "main.h"
/**
* *leet - change alphabet by numners
* @s: string
* Return: s successful
*/
char *leet(char *s)
{
int i, j;
char *alpha = "aeotlAOETL";
char *num = "4307143071";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; alpha[j] != '\0'; j++)
{
if (s[i] == alpha[j])
{
s[i] = num[j];
}
}
}
return (s);
}
