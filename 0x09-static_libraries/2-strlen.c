#include "main.h"
/**
 * _strlen - function
 * @s: value
 * Return: result
 */
int _strlen(char *s)
{
int longi = 0;
while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}
