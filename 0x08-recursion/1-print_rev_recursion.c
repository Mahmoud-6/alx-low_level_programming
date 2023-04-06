#include "main.h"
/**
 * _print_rev_recursion - function
 * @s: variable that contain the value
 * Return: Null
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
}
