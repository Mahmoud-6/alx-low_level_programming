#include "lists.h"
/**
 * print_listint - function
 * @h: value
 * Return: result
 */
size_t print_listint(const listint_t *h)
{
int counter = 0;
while (h != NULL)
{
printf("%d\n", h->n);
counter++;
h = h->next;
}
return (counter);
}
