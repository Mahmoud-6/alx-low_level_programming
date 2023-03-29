#include "main.h"
/**
 * _strncpy - function
 * @dest: variable that contain value
 * @src: variable that contain value
 * @n: variable that contain value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
