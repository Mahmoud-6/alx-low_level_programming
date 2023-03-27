#include "main.h"
/**
 * _strlen - function
 * @s: variable that contain value
 * Return: length
 */
int _strlen(char *s)
{
int length;
for (; *s != '\0' ; s++)
{
length++;
}
return (length);
}
