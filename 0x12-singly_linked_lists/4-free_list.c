#include <stdlib.h>
#include "lists.h"
/**
 * free_list - function
 * @head: value
 * Return: NULL
 */
void free_list(list_t *head)
{
list_t *c, *n;
c = head;
while (c != NULL)
{
n = c->next;
free(c->str);
free(c);
c = n;
}
}
