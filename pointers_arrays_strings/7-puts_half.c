#include "main.h"
/**
* puts_half - print half of string
* @str: string
*/
void puts_half(char *str)
{
int i = 0, len;
while (str[i] != '\0')
{
i++;
}
len = i - 1;
for (i = (len / 2) + 1; i < len; i++)
{

_putchar(str[i]);
}
_putchar('\n');
}
