#include <stdio.h>
#include <unistd.h>
/**
* *main - basic function
*Return: 0
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
void print_alphabet(void)
{
char i;
for (i = 'a' ; i <= 'z' ; i++)
{
_putchar(i);
}
