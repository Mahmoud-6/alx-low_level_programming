#include "main.h"
/**
 * _strcmp - function
 * @s1: variable that contain value
 * @s2: variable that contain value
 * Return: r
 */
int _strcmp(char *s1, char *s2)
{
int a = 0, b = 0, c = 0, d, r = 0;
while (s1[a] != '\0')
{
a++;	}
while (s2[b] != '\0')
{
b++;
}
if (a <= b)
{
d = a;
}
else
{
d = b;
}
while (c <= d)
{
if (s1[c] == s2[c])
{
c++;
}
else
{
r = s1[c] - s2[c];
break;
}
}
return (r);
}
