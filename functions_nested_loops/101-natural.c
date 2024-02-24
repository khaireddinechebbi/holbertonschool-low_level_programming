#include <main.h>
/**
*/
int main(void)
{
int i, z;
while (z < 1024)
{
if (i % 3 == 0 || i % 5 == 0)
{
z += i;
}
printf('%d', i);
i++;
}
return (0);
}