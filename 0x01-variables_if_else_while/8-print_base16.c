#include <stdio.h>
#include <time.h>
/**
 * *main - basic function
 * *Return: 0
 */
int main(void)
{
int n;
char h;
for (n = '0' ; n <= '9' ; n++)
{
putchar(n);
}
for (h = 'a' ; h <= 'f' ; h++)
{
putchar(h);
}
putchar('\n');
return (0);
}
