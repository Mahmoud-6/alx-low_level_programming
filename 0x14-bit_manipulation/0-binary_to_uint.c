#include "main.h"
/**
 * binary_to_uint - function
 * @b: value
 * Return: result
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int n = 0;
int i = 0;
if (b == NULL)
return (0);
for (i = 0 ; b[i] ; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
n = 2 * n + (b[i] - '0');
}
return (n);
}
