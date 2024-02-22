#include "main.h"
/**
 * print_alphabet_x10 - print if number is positive
 * Description: 'alphabet'
*/
void print_alphabet_x10(void)
{
char i;
int j = 1;
do {
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
j++;
} while (j <= 10);
_putchar('\n');
}
