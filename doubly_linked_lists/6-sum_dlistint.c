#include "lists.h"
/**
*/
int sum_dlistint(dlistint_t *head)
{
dlistint_t *t = head;
unsigned int s;

if (t == NULL)
return (0);
while (t != NULL)
{
s += t->n;
t = t->next;
}
return (s);
}
