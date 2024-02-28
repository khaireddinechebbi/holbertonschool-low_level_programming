#include "main.h"
#include <string.h>
/**
* rint_rev - print verse string
* @s: sting type char
*/
void print_rev(char *s)
{
int i;
for (i = strlen(s); i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
