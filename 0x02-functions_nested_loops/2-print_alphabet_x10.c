#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
*print_alphabet_x10 - function prints alphabets 10 times
*Return: 0
*/
void print_alphabet_x10(void)
{
char i;
int j = 1;
while (j <= 10)
{
for (i = 'a' ; i <= 'z' ; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
