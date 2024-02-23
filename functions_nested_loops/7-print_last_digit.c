#include "main.h"
/**
* print_last_digit - print the last digit
* @i: int
* Return: last digit
*/
int print_last_digit(int i)
{
int r;
r = i % 10;
return (r + '0');
}
