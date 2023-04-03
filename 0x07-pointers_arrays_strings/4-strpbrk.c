#include "main.h"
/**
* _strpbrk - function
* @s: variable that contains value
* @accept: variable that contains value
* Return: s
*/
char *_strpbrk(char *s, char *accept)
{
int c = 0, p;
while (s[c] != '\0')
{
p = 0;
while (accept[p] != '\0')
{
if (s[c] == accept[p])
{
s += c;
return (s);
}
p++;
}
c++;
}
return (0);
}
