#include "main.h"
/**
* print_most_numbers - function
* Return: null
*/
void print_most_numbers(void)
{
int a = 0;
for (; a <= 9; a++)
{
if (a == 2 || a == 4)
{
continue;
}
else
{
_putchar(a + '0');
}
}
_putchar('\n');
}
