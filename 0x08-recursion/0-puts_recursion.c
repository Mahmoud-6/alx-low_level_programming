#include "main.h"
/**
 * _puts_recursion - function
 * @s: variable that contain the value
 * Return: Null
 */
void _puts_recursion(char *s)
{
int i, c = 0;
while (s[c] != '\0')
{
c++;
}
for (i = 0 ; i < c ; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}
