#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function
 * @n: value
 * @separator: value
 */
void print_strings(const char *separator, const unsigned int n, ...);
{
unsigned int i;
int s;
va_list list;
va_start(list, n);
for (i = 0; i < n; i++)
{
s = va_arg(list, int);
if (s)
{
printf("%d", s);
}
else
{
printf("(nil)");
}
if (i < n - 1 && separator)
{
printf("%s", separator);
}
}
printf("\n");
va_end(list);
}
