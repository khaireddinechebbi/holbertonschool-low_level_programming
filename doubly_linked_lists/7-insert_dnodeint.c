#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to a pointer to the head of the list
 * @idx: Index of the list where the new node should be added
 * @n: Value to store in the new node
 * Return: Address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *new_node, *t = *h;

if (h == NULL)
return (NULL);

if (idx == 0)
return (add_dnodeint(h, n));

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

while (t != NULL && i < idx - 1)
{
t = t->next;
i++;
}
if (t == NULL)
return (NULL);

new_node->next = t->next;
if (t->next == NULL)
return (add_dnodeint_end(h, n));

t->next = new_node;
new_node->prev = t;

return (new_node);
}
