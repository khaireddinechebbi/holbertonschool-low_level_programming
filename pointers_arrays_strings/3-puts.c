#include "main.h"
/**
* _puts - print string
* @str: string type char
*/
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
