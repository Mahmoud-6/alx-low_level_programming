#include "main.h"
/**
* _strchr - function
* @s: variable that contains value
* @c: variable that contains value
* Return: s
*/
char *_strchr(char *s, char c)
{
int i, a = 0;
while (s[a] != '\0')
{
a++;
}
for (i = 0 ; i <= a ; i++)
{
if (s[i] == c)
{
s += i;
return (s);
}
}
return ('\0');
}
