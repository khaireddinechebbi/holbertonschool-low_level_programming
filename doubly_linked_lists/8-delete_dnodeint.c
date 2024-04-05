#include "lists.h"
/**
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *d, *t = *head;
unsigned int i;

if (head == NULL)
return (-1);

if (index == 0)
{
*head = t->next;
if (head != NULL)
(*head)->prev = NULL;
return (1);
}
for (i = 0; t != NULL && i < index; i++)
t = t->next;

if (t == NULL)
return (-1);

d = t->next->next;
t->next = d;
d->prev = t;

return (1);


}
