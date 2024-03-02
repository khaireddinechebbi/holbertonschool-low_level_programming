#include "main.h"
/**
*/
char *leet(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
s[i] = (s[i] == 'a' || s[i] == 'A') ? '4' : s[i];
s[i] = (s[i] == 'e' || s[i] == 'E') ? '3' : s[i];
s[i] = (s[i] == 'o' || s[i] == 'O') ? '0' : s[i];
s[i] = (s[i] == 't' || s[i] == 'T') ? '7' : s[i];
s[i] = (s[i] == 'l' || s[i] == 'L') ? '1' : s[i];
}

return (s);
}
