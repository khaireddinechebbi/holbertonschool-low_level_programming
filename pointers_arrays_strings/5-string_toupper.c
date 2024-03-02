#include "main.h"
/**
*/
char *string_toupper(char *)
{
int i, n;
char s[n];
for (i = 0; i < n; i++)
{
if (s[i] <= 'z' && s[i] >= 'a')
{
s[i] = s[i] - 32;
}
}
return (s);
}
