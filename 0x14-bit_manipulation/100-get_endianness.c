#include "main.h"
/**
 * get_endianness - function
 * Return: result
*/
int get_endianness(void)
{
int n = 1;
char *e = (char *)&num;
if (*e == 1)
return (1);
return (0);
}
