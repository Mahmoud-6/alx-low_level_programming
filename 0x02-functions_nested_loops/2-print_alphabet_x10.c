#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "print_alphabet_x10.h"
#include "other_header.h"
/**
* *main - basic function
*Return: 0
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
void print_alphabet_x10();
int main(void)
{
print_alphabet_x10();
return (0);
}
void print_alphabet_x10(void)
{
char i;
int j;
for (j = 1 ; j <= 10 ; j++)
{
for (i = 'a' ; i <= 'z' ; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
