#include "main.h"
/**
 * reverse_array - function
 * @a: variable that contain value
 * @n: variable that contain value
 * Return: null
 */
void reverse_array(int *a, int n)
{
int t, i, j;
int *p;
p = a;
for (j = 1 ; j < n ; j++)
{
p++;
}
for (i = 0; i < j / 2 ; i++)
{
t = *p;
*p = a[i];
a[i] = t;
p--;
}
}
