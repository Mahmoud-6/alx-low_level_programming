#include "main.h"
/**
 * cap_string - function
 * @a: variable that contain value
 * Return: a
 */
char *cap_string(char *a)
{
int c = 0, i;
int r = 13;
char s[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};
while (a[c])
{
i = 0;
while (i < r)
{
if ((c == 0 || a[c - 1] == s[i]) && (a[c] >= 97 && a[c] <= 122))
a[c] -= 32;
i++;
}
c++;
}
return (a);
}
