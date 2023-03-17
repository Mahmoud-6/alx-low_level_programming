#include <stdio.h>
/**
 *main - basic function
 *Return: 0
 */
int main(void)
{
int n = rand();
if (n > 0)
{
printf("is positive");
}
else if (n == 0)
{
printf("is zero");
}
else
{
printf("is negative");
}
return (0);
}
