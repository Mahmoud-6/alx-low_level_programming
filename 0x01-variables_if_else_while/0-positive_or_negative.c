#include <stdio.h>
#include <time.h>
/**
 *main - basic function
 *Return: 0
 */
srand(time(0));
int main(void)
{
int n;
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("is positive");
else if (n == 0)
printf("is zero");
else
printf("is negative");
return (0);
}
