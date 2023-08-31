#include "main.h"
/**
 * flip_bits - function
 * @n: value
 * @m: value
 * Return: result
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = n ^ m, c = 0;
while (x > 0)
{
c += (x & 1);
x >>= 1;
}
return (c);
}
