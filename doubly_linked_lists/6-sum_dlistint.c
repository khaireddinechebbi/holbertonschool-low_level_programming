#include "lists.h"
/**
* sum_dlistint - returns the sum of all the data (n)
* @head: pointer
* Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
dlistint_t *t = head;
int s = 0;

if (t == NULL)
return (0);
while (t != NULL)
{
s += t->n;
t = t->next;
}
return (s);
}
