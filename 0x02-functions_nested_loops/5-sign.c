#include <stdio.h>
#include "main.h"
/**
* print_sign - function returns + or - or 0
* Return: 0 or 1
* @n: parameter that comtains value
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}

