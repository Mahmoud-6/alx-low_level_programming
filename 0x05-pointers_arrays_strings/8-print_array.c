#include "main.h"
/**
 * print_array - function
 * @a: variable that contain value
 * @n: variable that contain value
 * Return: Null
 */
void print_array(int *a, int n)
{
int i;
for (i = 0 ; i < n ; i++)
{
printf("%d", a[i]);
if (i != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
