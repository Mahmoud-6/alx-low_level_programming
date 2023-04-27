#include "lists.h"
#include <stdlib.h>
/**
 * add_node - function
 * @head: value
 * @str: value
 * Return: result
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *n_node;
size_t len = 0;
if (str == NULL)
{
len = 0;
}
while (str[len] != '\0')
{
len++;
}
n_node = malloc(sizeof(list_t));
if (n_node == NULL)
{
return (NULL);
}
if (*head == NULL)
{
n_node->next = NULL;
}
else
{
n_node->next = *head;
}
n_node->str = strdup(str);
n_node->len = len;
*head = n_node;
return (*head);
}
