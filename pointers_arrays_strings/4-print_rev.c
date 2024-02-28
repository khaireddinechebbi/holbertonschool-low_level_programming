#include "main.h"
/**
* rint_rev - print verse string
* @s: sting type char
*/
void print_rev(char *s)
{

int i = 0;
while (s[i] != '\0')
{
i++;
}
for (i -= 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
