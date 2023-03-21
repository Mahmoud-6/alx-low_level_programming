#include <stdio.h>
#include "main.h"
/**
* print_sign - function returns + or - or 0
* Return: 0 or 1
* @n: parameter that comtains value
*/
int print_sign(int n)
{
int x;
if (n > 0)
{
x = '+';
return(x);
}
else
{
if (n < 0)
{
x = '-';
return(x);
}
else
{
x = 0;
return(x);
}
}
}
