#include "main.h"
/**
 * rev_string - function
 * @s: variable that contain value
 * Return: Null
 */
void rev_string(char *s)
{int i, c, j;
char *p, e;
p = s;
while (s[c] != '\0')
{
c++;
}
for (j = 1; j < c; j++)
{
p++;
}
for (i = 0; i < (c / 2); i++)
{
e = s[i];
s[i] = *p;
*p = e;
p--;
}
}
