#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function
 * @str: value
 * Return: result
 */
char *_strdup(char *str)
{
int i = sizeof(str) + 1;
int j;
char *p;
if (str == NULL)
{
return (NULL);
}
p = malloc((sizeof(char) * i) + 1);
if (p == 0)
{
return (NULL);
}
for (j = 0 ; j < i ; j++)
{
p[j] = str[j];
}
p[j] = '\0';
return (p);
}
