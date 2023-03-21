#include <stdio.h>
#include "main.h"
/**
* _islower - function returns 0 or 1
* @c: parameter that caontains the value
* Return: 0 or 1
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
