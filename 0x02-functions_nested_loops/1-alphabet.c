#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
*print_alphabet - function print alphabets
*Return: 0
*/
void print_alphabet(void)
{
char i;
for (i = 'a' ; i <= 'z' ; i++)
{
_putchar(i);
}
}
