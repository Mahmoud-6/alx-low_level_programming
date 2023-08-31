#include "main.h"
/**
 * clear_bit - function
 * @n: value
 * @index: value
 * Return: result
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
*n &= ~(1 << index);
return (1);
}
