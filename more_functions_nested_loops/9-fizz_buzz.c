#include <stdio.h>
/**
* main - print fizz buzz
* Return: 0 successful
*/
int main(void)
{
int i;
for (i = 1; i < 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
printf("Fizz ");
else if (i % 5 == 0 && i % 3 != 0)
printf("Buzz ");
else if (i % 5 == 0 && i % 3 == 0)
printf("FizzBuzz ");
else
printf("%d ", i);
}
printf("Buzz\n");
return (0);
}
