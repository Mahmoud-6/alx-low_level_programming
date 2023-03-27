#include "main.h"
/**
 * puts_half - function
 * @str: variable that contain value
 * Return: Null
 */
void puts_half(char *str)
{
int i, j = 0;
while (str[j] != '\0')
{
j++;
}
if (j % 2 != 0)
{
i = (j - 1) / 2;
i++;
}
else
{
i = j / 2;
}
for (; i < j ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
