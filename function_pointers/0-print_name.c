#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_name - print name
* @name: string
* @f: pointer to a function
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
