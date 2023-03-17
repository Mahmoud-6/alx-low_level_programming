#include <stdio.h>
#include <time.h>
/**
 * *main - basic function
 * *Return: 0
 */
int main(void)
{
char n,w;
for (n = 'a' ; n <= 'z' ; n++)
{
putchar(n);
}
for (w = 'A' ; w <= 'Z' ; w++)
{
putchar(w);
}
putchar('\n');
return (0);
}
