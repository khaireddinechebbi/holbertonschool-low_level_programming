#include "main.h"
/**
* rev_string - print verse string
* @s: sting type char
*/
void rev_string(char *s)
{
int i = 0, ln, r;
while (s[i] != '\0')
{
i++;
}
ln = i;
for (i = ln - 1; i >= ln / 2; i--)
{
r = s[i];
s[i] = s[ln - i - 1];
s[ln - i - 1] = r;
}
}
