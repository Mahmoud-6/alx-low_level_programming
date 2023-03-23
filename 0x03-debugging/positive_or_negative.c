#include <stdio.h>
#include "main.h"
/**
* postitive_or_negative - tests function that prints if integer is positive or negative
*/
void positive_or_negative(int i)
{
if (i < 0)
{
printf("%i is negative\n", i);
}
else if (i > 0)
{
printf("%i is positive\n", i);
}
else
{
printf("%i is zero\n", i);
}
}
