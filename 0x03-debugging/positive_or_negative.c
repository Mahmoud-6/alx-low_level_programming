#include <stdio.h>
#include "main.h"
/**
* postitive_or_negative - tests function that prints if integer is positive or negative
*/
void postitive_or_negative(int i)
{
if (i < 0)
{
printf("%d is negative\n", i);
}
if (i > 0)
{
printf("%d is positive\n", i);
}
if (i == 0)
{
printf("%d is zero\n", i);
}
}
