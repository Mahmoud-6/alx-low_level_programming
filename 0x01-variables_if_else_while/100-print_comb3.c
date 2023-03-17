#include <stdio.h>
#include <time.h>
/**
 *main - basic function
 *Return: 0
 */
int main(void)
{
int n, d;
for (n = '0' ; n <= '9' ; n++)
{
for (d = n+1 ; d <= '9' ; d++)
{
if (n != d )
{
putchar(n);
putchar(d);
if (n == '8' && d == '9')
{
break;
}
putchar(',');
putchar(' ');
}
}
}
return (0);
}
