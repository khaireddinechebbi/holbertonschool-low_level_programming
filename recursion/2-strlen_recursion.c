#include "main.h"
/**
* _strlen_recursion - print string's length
* @s: string
*/
int _strlen_recursion(char *s)
{
int n;
if (*s != '\0')
_strlen_recursion(s + 1);
return (n);
}
