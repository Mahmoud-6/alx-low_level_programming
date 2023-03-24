#include "main.h"
/**
* print_most_numbers - function
* Return: null
*/
void print_most_numbers(void)
{
int p;
for (p = 0; p <= 9; p++)
{
if (p == 2 || p == 4)
{
p++;
_putchar('0' + p);
}
}
_putchar('\n');
}
