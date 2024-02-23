#include "main.h"
/**
* print_last_digit - print the last digit
* @i: int
* Return: last digit
* Description: (r *= -1) to ensure r is positive
*/
int print_last_digit(int i)
{
int r;
r = i % 10;
if (r < 0)
{
return (r *= (-1));
}
return (r);
}
