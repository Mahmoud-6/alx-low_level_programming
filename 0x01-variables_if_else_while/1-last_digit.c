#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - basic function
 *Return: 0
 */
int main(void)
{
int n,d;
srand(time(0));
n = rand() - RAND_MAX / 2;
d = n % 10;
if (d > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, d);
}
else if (d == 0)
{
printf("Last digit of %d is %d and is 0\n", n, d);
}
else
{
printf("Last digit of %d is %d and is less than 5\n", n, d);
}
return (0);
}
