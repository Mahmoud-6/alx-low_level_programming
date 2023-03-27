#include "main.h"
/**
 * swap_int - function
 * @a: variable that contain value
 * @b: variable that contain value
 * Return: Null
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
