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
int i = 0, sum;
char *p;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
sum = nmemb * size;
p = calloc(nmemb, size);
return (p);
}
