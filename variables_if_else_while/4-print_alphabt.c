#include <stdio.h>
#include <string.h>
/**
 * main - print if number is positive
 * Return: Always 0 (Success)
*/
int main(void)
{
char i = 'a';
while (i < 'z')
{
if (i != 'e' && i != 'q')
{
putchar(i);
}
i++;
}
putchar('\n');
return (0);
}
