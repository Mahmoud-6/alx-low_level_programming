#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
  * print_list - function
  * @h: value
  * Return: result
  */
size_t print_list(const list_t *h)
{
size_t i;
for (i = 0; h; i++)
{
if (h->str == NULL)
{
printf("[%d] %s\n", 0, "(nil)");
}
else
{
printf("[%d] %s\n", (*h).len, (*h).str);
}
h = (*h).next;
}
return (i);
}