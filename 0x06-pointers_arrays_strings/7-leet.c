#include "main.h"
/**
 * leet - function
 * @a: variable that contain value
 * Return: r
 */
char *leet(char *a)
{
int i, j;
char s[5] = {'A', 'E', 'O', 'T', 'L'};
char s2[5] = {'4', '3', '0', '7', '1'};
for (i = 0 ; a[i] != '\0' ; i++)
{
j = 0;
while (j < 5)
{
if (a[i] == s[j] || (a[i] - 32) == (s[j]))
{
a[i] = s2[j];
}
j++;
}
}
return (a);
}
