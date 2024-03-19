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
if (argc != 4) {
printf("Error\n");
return (98);
}

int a = atoi(argv[1]);
int b = atoi(argv[3]);
char *operator = argv[2];

if (get_op_func(operator) == NULL || argv[2][1] != '\0') {
printf("Error\n");
return (99);
}
if ((*operator == '/' || *operator == '%') && num2 == 0) {
printf("Error\n");
return (100);
}
printf("%d\n", get_op_func(operator)(num1, num2));
return (0);
}
