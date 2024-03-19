#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
* int_index - searches for an integer
* @array: array
* @size: int
* @cmp: function
* Return: index or (-1)
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
else
return (-1);
}
}
return (-1);
}
