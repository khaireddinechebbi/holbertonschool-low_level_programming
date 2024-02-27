#include "main.h"
/**
* swap_int - swap values
* @a: pointer type int
* @b: pointer type int
*/
void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
