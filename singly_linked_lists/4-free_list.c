#include "lists.h"
/**
* free_list - frees lists
* @head: pointer to a list
*/
void free_list(list_t *head)
{
list_t *t;

while (head != NULL)
{
t = head;
head = head->next;
free(t->str);
free(t);
}
}
