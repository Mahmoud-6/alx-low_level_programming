#include "main.h"
/**
 * _strcat - function
 * @dest: variable that contain value
 * @src: variable that contain value
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int c = 0, i;
while (dest[c] != '\0')
{
c++;
}
for (i = 0 ; src[i] != 0 ; i++ , c++)
{
dest[c] = src[i];
}
dest[c] = '\0';
return (dest);
}
