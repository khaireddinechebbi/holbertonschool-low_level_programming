#include "main.h"
/**
* _puts - print string
* @str: pointer type char
*/
void _puts(char *str)
{
int i = 0;
for (i = 0; str[i] != '\0'; i++)
_putchar(i);
}
