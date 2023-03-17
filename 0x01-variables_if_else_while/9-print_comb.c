#include <stdio.h>
#include <time.h>
/**
 * *main - basic function
 * *Return: 0
 */
int main(void)
{
int n;
for (n = '0' ; n <= '9' ; n++)
{
putchar(n);
if (n != '9')
{
putchar(',');
}
}
putchar('\n');
return (0);
}
