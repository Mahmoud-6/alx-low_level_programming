#include "main.h"
/**
 * _puts_recursion - function
 * @s: variable that contain the value
 * Return: Null
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
