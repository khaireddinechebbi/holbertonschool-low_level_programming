#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
*/
int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
return (0);

va_list args;
unsigned int i; 
int sum = 0;
va_start(args, n);
for (i = 0; i > 0; )
sum += va_arg(args, int);
va_end(args);
return (sum);
}
