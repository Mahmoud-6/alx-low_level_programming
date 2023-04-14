#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function
 * @nmemb: variable
 * @size: variable
 * Return: result
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
p = calloc(nmemb, size);
return (p);
}
