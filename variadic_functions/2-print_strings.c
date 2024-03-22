#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* print_strings - print strings
* @separator: separator
* @n: number of arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list string;
unsigned int i;
const char *str;

va_start(string, n);
for (i = 0; i < n; i++)
{
str = va_arg(string, const char *);
if (str == NULL)
printf("nil");
if (str != NULL)
printf("%s", str);
if (separator != NULL && i < (n - 1))
printf("%s", separator);
}
printf("\n");
}
