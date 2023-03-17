#include <time.h>
/**
 *main - basic function
 *Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if ((n % 10) > 5)
{
printf("is %d and is greater than 5\n", n);
}
else if ((n % 10) == 0)
{
printf("is %d and is 0\n", n);
}
else
{
printf("is %d and is less than 5\n", n);
}
return (0);
}
