#include "main.h"
/**
 * print_line - function
 * @n: variable that contians value
 * Return: null
 */
void print_line(int n)
{
if (n > 0)
{
for (; n != 0 ; n--)
{
_putchar('_');
}
_putchar('\n');
}
}
