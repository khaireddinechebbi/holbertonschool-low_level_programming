#include <stdio.h>
/**
 * main - print if number is positive
 * Return: Always 0 (Success)
*/
int main(void)
{
long int num = 9876543210;
while (num > 0)
{
int i = num % 10;
putchar(i + '0');
num /= 10;
}
putchar('\n');
return (0);
}
