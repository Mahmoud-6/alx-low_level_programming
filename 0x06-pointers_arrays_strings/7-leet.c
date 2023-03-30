#include "main.h"
/**
 * leet - function
 * @a: variable that contain value
 * Return: r
 */
char *leet(char *a)
{
int i, j = 0, c = 0;
char s[] = {'A', 'E', 'O', 'T', 'l'};
char s2[] = {'4', '3', '0', '7', '1'};
while (a[c] != '\0')
{
c++;
}
for (i = 0 ; i < c ; i++)
{
while (j < 5)
{
if (a[i] == s[j] || a[i] == s[j] - 32)
{
a[i] = s2[j];
j++;
}
}
}
return (a);
}
