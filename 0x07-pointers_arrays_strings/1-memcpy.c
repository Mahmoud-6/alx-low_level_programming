#include "main.h"
/**
* _memcpy - function
* @dest: variable that contains value
* @src: variable that contains value
* @n: variable that contains value
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
{
dest[i] = src[i];
}
return (dest);
}
