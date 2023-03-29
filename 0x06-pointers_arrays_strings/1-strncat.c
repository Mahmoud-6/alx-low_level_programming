#include "main.h"
/**
 * _strncat - function
 * @dest: variable that contain value
 * @src: variable that contain value
 * @n: variable that contain value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int c = 0, i;
while (dest[c] != '\0')
{
c++;
}
for (i = 0 ; src[i] != '\0' &&  i < n  ; i++, c++)
{
dest[c] = src[i];
}
dest[c] = '\0';
return (dest);
}
