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
for (char i = 'a' ; i <= 'z' ; i++)
{
_putchar(i);
}
