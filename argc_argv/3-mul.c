#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies two numbers
* @argc: argument count
* @argv: argument vector
* Return: 0 successful
*/
int main(int argc, char *argv[])
{
if (argc == 3)
{
int x = atoi(argv[1]);
int y = atoi(argv[2]);
printf("%d\n", x * y);
}
else
printf("Error\n");
return (0);
}
