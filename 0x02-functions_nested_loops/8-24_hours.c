#include <stdio.h>
#include "main.h"
/**
* jack_bauer - function that returns the clock
* Return: x
*/
void jack_bauer(void)
{
int h, m;
four (h = 0 ; h <= 23 ; h++)
{
for (m = 0 ; m <= 59 ; m++)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar('\n');
}
}
}
