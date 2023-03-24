#include "main.h"
/**
* print_triangle - function
* @size: variable that contains the value
* Return: null
*/
void print_triangle(int size)
{
int a, b;
if (size > 0)
{
for (a = 1 ; a <= size ; a++)
{
for (b = a ; b < size ; b++)
{
_putchar(' ');
}
for (b = 1 ; b <= a ; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
