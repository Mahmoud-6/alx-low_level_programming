#include <stdio.h>
#include "main.h"
/**
* print_to_98 - function that prints to 98
* @n: parameter that contains value
* Return: result
*/
void print_to_98(int n)
{
int i, j;
if (n > 98)
{
for (i = n ; i >= 98 ; i--)
{
if (i == 98)
{
printf("%d", i);
}
else
{
printf("%d,", i);
}
}
}
else 
{
for (j = n ; j <= 98 ; j++)
{
if (j == 98)
{
printf("%d", j);
}
else
{
printf("%d,", j);
}
}
}
}
