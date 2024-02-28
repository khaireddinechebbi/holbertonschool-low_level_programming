#include "main.h"
/**
* rint_rev - print verse string
* @s: sting type char
*/
void print_rev(char *s)
{

int i, ln;
int l = 0;
while (*s != '\0')
{
l++;
s++;
}
ln = l;
for (i = ln - 1; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
