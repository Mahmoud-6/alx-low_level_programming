#include "main.h"
/**
 * print_line - function
 * @n: variable that contians value
 * Return: null
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 0 ; i < n ; i++)
{
for (j = 0 ; j < i ; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
