#include "lists.h"
/**
* dlistint_len - prints numbers of elements in a linked dlistint_t list
* @h: pointer to list
* Return: numbers of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;
while (h)
{
i++;
h = h->next;
}
return (i);
}
