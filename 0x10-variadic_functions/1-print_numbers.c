#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function
 * @n: value
 * @separator: value
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int num;
va_list list;
va_start(list, n);
for (i = 0; i < n; i++)
{
num = va_arg(list, int);
printf("%d", num);
if (i < n - 1 && separator)
printf("%s", separator);
}
printf("\n");
va_end(list);
}
