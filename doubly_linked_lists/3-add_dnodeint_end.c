#include "lists.h"
/**
* *add_dnodeint_end - adds a new node at the end of a dlistint_t list
* @n: int
* @head: pointer to a pointer
* Return: numbers of nodes
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;
dlistint_t *last_node = *head;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (*head == NULL)
*head = new_node;
else
{
while (last_node->next != NULL)
{
last_node = last_node->next;
}
last_node->next = new_node;
}
return (new_node);

}
