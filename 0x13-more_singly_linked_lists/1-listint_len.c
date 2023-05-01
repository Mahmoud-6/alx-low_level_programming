#include "lists.h"
/**
 * listint_len - function
 * @h: value
 * Return: result
 */
size_t listint_len(const listint_t *h)
{
int counter = 0;
while (h != NULL)
{
counter++;
h = h->next;
}
return (counter);
}
