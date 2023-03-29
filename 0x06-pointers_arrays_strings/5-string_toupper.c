#include "main.h"
/**
 * string_toupper - function
 * @a: variable that contain value
 * Return: a
 */
char *string_toupper(char *a)
{
int i;
for (i = 0 ; a[i] != '\0' ; i++)
{
if (a[i] >= 'a' && a[i] <= 'z')
{
a[i] -= 32;
}
}
return (a);
}
