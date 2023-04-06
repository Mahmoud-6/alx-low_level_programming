#include "main.h"
/**
 * _sqrt_recursion - function
 * @n: variable that contain the value
 * Return: result
 */
int _sqrt_recursion(int n)
{
return (sqr(n, 1));
}
/**
 * sqr - function
 * @n: variable that contain the value
 * @i: variable that contain the value
 * Return: result
 */
int sqr(int n, int i)
{
int x = i * i;
if (x == n)
{
return (i);
}
if (x > n)
{
return (-1);
}
return (sqr(n, y + 1));
}
