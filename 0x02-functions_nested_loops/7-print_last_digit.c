#include <stdio.h>
#include "main.h"
/**
* _abs - function that returns the last digit
* @n: parameters that contains the value
* Return: x
*/
int print_last_digit(int n)
{
int x;
x = n % 10;
if(x < 0)
{
x *= -1;
}
_putchar(x + '0');
return (x);
}
