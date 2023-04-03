#include "main.h"
/**
* _memset - function
* @s: variable that contains value
* @b: variable that contains value
* @n: variable that contains value
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
{
s[i] = b;
}
return (s);
}
