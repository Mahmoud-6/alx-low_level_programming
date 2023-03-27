#include "main.h"
/**
 * _strcpy - function
 * @dest: variable that contain value
 * @src: variable that contain value
 * Return: Null
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0 ; src[i] != '\0' ; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
