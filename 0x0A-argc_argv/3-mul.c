#include "main.h"
#include <stdlib.h>
/**
 * main - function
 * @argc: variable
 * @argv: variable
 * Return: result
 */
int main(int argc, char *argv[])
{
int c1, c2;
if (argc == 3)
{
c1 = atoi(argv[1]);
c2 = atoi(argv[2]);
printf("%d\n", (c1 *c2));
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
