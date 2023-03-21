#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* *main - basic function
*Return: 0
*/
int _puthar(char d)
{
return (write(1, &d, 1));
}
int main(void)
{
_putchar('_');
_putchar('p');
_putchar('u');
_putchar('t');
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
_putchar('\n');
return (0);
}
