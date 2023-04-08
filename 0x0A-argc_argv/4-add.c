#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: variable
 * @argv: variable
 * Return: result
 */
int main(int argc, char *argv[])
{
int i;
unsigned int j, sum = 0;
char *c;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
c = argv[i];
for (j = 0; j < strlen(c); j++)
{
if (c[j] < 48 || c[j] > 57)
{
printf("Error\n");
return (1);
}
}
sum += atoi(c);
c++;
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
