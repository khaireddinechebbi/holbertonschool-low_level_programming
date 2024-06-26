#include "lists.h"
/**
* *add_node_end - adds a new node at the end of a list_t list
* @head: pointer to the pointer to the head of the list
* @str: string to be duplicated and stored in the new node
* Return: the address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *last_node = *head;
int i;

if (str == NULL)
return (NULL);

for (i = 0; str[i]; i++)
;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->len = i;
new_node->next = NULL;

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
