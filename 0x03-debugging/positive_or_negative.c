#include <stdio.h>
#include "main.h"
/**
* positive_or_negative -fumction
* @i: variable that contain value
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
