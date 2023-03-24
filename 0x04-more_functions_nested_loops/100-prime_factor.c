#include <stdio.h>
#include <math.h>
/**
* main - basic function
* Return: 0
*/
int main(void)
{
long a, maxa;
long number = 612852475143;
double sq = sqrt(number);
for (a = 1; a <= sq; a++)
{
if (number % a == 0)
{
maxa = number / a;
}
}
printf("%ld\n", maxa);
return (0);
}
