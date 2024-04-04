#include "lists.h"
/**
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t i = 0;
while (h)
{
if (h->n)
printf("%d\n", h->n);
i++;
h = h->next;
}
return (i);
}
