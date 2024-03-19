#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* op_add - addition
* @a: int
* @b: int
* Return: result
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - difference
* @a: int
* @b: int
* Return: result
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - product
* @a: int
* @b: int
* Return: result
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - division
* @a: int
* @b: int
* Return: result
*/
int op_div(int a, int b)
{
return (a / b);
}

/**
* op_mod - remainder of division
* @a: int
* @b: int
* Return: result
*/
int op_mod(int a, int b)
{
return (a % b);
}
