#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
void print_alphabet_x10();
/**
* *main - basic function
*Return: 0
*/
int _putchar(char c)
{
return (write(1, &c, 1));
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
