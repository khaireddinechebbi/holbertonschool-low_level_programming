#include "main.h"
/**
 * _isalpha - print if number is positive
 * Description: 'alphabet'
 * @c: a character
 * Return: 1 if lowercase, otherwise 0
*/
int _isalpha(int c)
{
if (c >= 'A' && c <= 'Z' && c >='a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
