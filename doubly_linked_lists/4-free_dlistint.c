#include "lists.h"
/**
* free_dlistint - rees a dlistint_t list
* @head: pointer to list
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *t;

while(head)
t = head;
head = head->next;
free(t->n);
free(t);
}
