#include "lists.h"
/**
* delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
* @head: Pointer to a pointer to the head of the list
* @index: Index of the node that should be deleted
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *d, *t = *head;
unsigned int i;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = t->next;
if (*head != NULL)
(*head)->prev = NULL;
free(t);
return (1);
}
for (i = 0; t != NULL && i < index - 1; i++)
t = t->next;

if (t == NULL || t->next == NULL)
return (-1);

d = t->next->next;
free(t->next);
t->next = d;
if (d != NULL)
d->prev = t;

return (1);


}
