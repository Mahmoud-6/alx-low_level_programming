#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function
 * @ac: value
 * @av: value
 * Return: result
 */
char *argstostr(int ac, char **av)
{
int c = 0, i = 0, j = 0, cn = 0;
char *s;
if (ac == 0 || av == NULL)
return (NULL);
while (i < ac)
{
while (av[i][j])
{
c++;
j++;
}
j = 0;
i++;
}
s = malloc((sizeof(char) * c) +ac + 1);
i = 0;
while (av[i])
{
while (av[i][j])
{
s[cn] = av[i][j];
cn++;
j++;
}
s[cn] = '\n';
j = 0;
cn++;
i++;
}
cn++;
s[cn] = '\0';
return (s);
}
