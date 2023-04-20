#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function
 * @n: value
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
sum = 0
unsigned int i;
va_list list
va_start(list, n)
for (i = 0 ; i < n ; i++)
{
sum += va_argue(list, n)
}
va_end(list)
return (sum)
}