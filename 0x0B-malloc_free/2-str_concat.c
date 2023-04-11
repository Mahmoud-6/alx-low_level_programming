#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function
 * @s1: value
 * @s2: value
 * Return: result
 */
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, c = 0, s = 0;
char *p;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i])
{
i++;
}
while (s2[j])
{
j++;
}
s = i + j;
p = malloc((sizeof(char) * s) +1);
if (p == NULL)
{
return (NULL);
}
j = 0;
while (c < s)
{
if (c < i)
{
p[c] = s1[c];
}
if (c >= i)
{
p[c] = s2[j];
j++;
}
c++;
}
p[c] = '\0';
return (p);
}
