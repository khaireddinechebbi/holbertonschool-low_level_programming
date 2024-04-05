#include "lists.h"
/**
* *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
* @head: pointer to list
* @index: unsigned int
* Return: nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *t = head;
unsigned int i = 0;

while (t != NULL)
{
if (i == index)
return (t);
i++;
t = t->next;
}
return (NULL);
}
