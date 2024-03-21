#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - calculate numbers
* @argc: argument count
* @argv: argument vector
* Return: 99, 100, result
*/
int main(int argc, char *argv[])
{
int num1, num2;
char operator;
int (*f)(int a, int b);

if (argc != 4)
{
printf("Error\n");
return (98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
f = get_op_func(argv[2]);

if (f == NULL)
{
printf("Error\n");
return (99);
}
if ((*operator == '/' || *operator == '%') && num2 == 0)
{
printf("Error\n");
return (100);
}

printf("%d\n", f(num1, num2));
return (0);
}
