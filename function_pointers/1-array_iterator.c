#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>


/**
* array_iterator - executes a function
* @array: array
* @size: type
* @action: function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
