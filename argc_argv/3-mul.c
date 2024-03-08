#include <stdio.h>
/**
* main - multiplies two numbers
* @argc: argument count
* @argv: argument vector
* Return: 0 successful
*/
int main(int argc, char *argv[])
{
if (argc == 1)
printf("Error");
printf("%d\n", argv[1] * argv[2]);
return (0);
}