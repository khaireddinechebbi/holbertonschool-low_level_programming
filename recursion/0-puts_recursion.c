#include "main.h"
/**
* _puts_recursion - print string
* @s: string
*/
void _puts_recursion(char *s)
{
int i = 0;
char c;
while (s[i])
{
c = s[i];
_putchar(c);
i++;
}
_putchar('\n');
}
