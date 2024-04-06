#include "lists.h"
/**
 * insert_dnodeint_at_index - function name
 * @h: Pointer
 * @n: integer
 * @idx: Position
 * Return: The direction of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *x, *y = *h;

if (idx == 0)
return (add_dnodeint(h, n));

for (; idx != 1; idx--)
{
if (y == NULL)
return (NULL);
y = y->next;
}

if (y->next == NULL)
return (add_dnodeint_end(h, n));

x = malloc(sizeof(dlistint_t));

if (x == NULL)
return (NULL);

x->n = n;
x->next = y->next;
x->prev = y;
y->next->prev = x;
y->next = x;

return (x);
}
