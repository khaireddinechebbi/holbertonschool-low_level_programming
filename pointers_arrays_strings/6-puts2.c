#include "main.h"
/**
* puts2 - prints half the characters of string
* @str: string
*/
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (i % 2 == 0)
_putchar(str[i]);
else
continue;
}
_putchar('\n');
}
