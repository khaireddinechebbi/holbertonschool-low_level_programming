#include "lists.h"
/**
* print_dlistint - prints all the elements of a dlistint_t list
* @h: pointer to list
* Return: numbers of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t i = 0;
while (h)
{
if (h->n)
printf("%d\n", h->n);
else
printf("0");
i++;
h = h->next;
}
return (i);
}
