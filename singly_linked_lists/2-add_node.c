#include "lists.h"
/**
* *add_node - adds a new node at the beginning of a list_t list
* @str: string
* @head: pointer to a pointer
* Return:  the address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *node;
int i;

if (str == NULL)
return (NULL);

for (i = 0; str[i]; i++)
;

node = malloc(sizeof(list_t));
if (node == NULL)
return (NULL);

node->str = strdup(str);
if (node->str == NULL)
{
free(node);
return (NULL);
}

node->len = i;
node->next = *head;
*head = node;

return (node);
}
