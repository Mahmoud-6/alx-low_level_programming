#include "main.h"
#include <stdlib.h>
/**
 * create_array - function
 * @size: value
 * @c: value
 * Return: result
 */
char *create_array(unsigned int size, char c)
{
int i;
char *p;
if (size == 0)
{
return (NULL);
}
p = malloc(size * sizeof(char));
if (p == NULL)
{
return (NULL);
}
for (i = 0 ; i < size ; i++)
{
p[i] = c;
}
return (s);
}
