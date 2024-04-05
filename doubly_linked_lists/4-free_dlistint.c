#include "lists.h"
/**
* free_dlistint - rees a dlistint_t list
* @head: pointer to list
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *t = head, *n;

while(t != NULL)
{
n = t->next;
free (t);
t = n;
}
}
