#include "main.h"
/**
 * cap_string - function
 * @a: variable that contain value
 * Return: r
 */
char *cap_string(char *a)
{
int i;
for (i = 'a' ; a[i] != '\0' ; i++)
{
if (a[i] >= 'a' && a[i] <= 'z')
{
a[i] -= 32;	}
}
return (a);
}
