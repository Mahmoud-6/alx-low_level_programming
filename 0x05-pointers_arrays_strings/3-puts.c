#include "main.h"
/**
 * _puts - function
 * @str: variable that contain value
 * Return: Null
 */
void _puts(char *str)
{
for (; *str != '\0' ; str++)
{
_putchar(*str);
}
_putchar('\n');
}
