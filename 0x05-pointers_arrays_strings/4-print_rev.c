#include "main.h"
/**
 * print_rev - function
 * @s: variable that contain value
 * Return: Null
 */
void print_rev(char *s)
{
int c = 0;
while (s[c] != 0)
{
c++;
}
for (; c >= 0 ; c--)
{
_putchar(s[c]);
}
_putchar('\n');
}
