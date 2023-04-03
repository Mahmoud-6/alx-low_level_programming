#include "main.h"
/**
*  _strspn - function
* @s: variable that contains value
* @accept: variable that contains value
* Return: c
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int a = 0, b, c = 0;
while (accept[a])
{
b = 0;
while (s[b] != 32)
{
if (accept[a] == s[b])
{
c++;
}
b++;
}
a++;
}
return (c);
}
