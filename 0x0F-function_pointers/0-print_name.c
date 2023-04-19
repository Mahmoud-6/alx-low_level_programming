#include "function_pointers.h"
#include <stdlib.h>
/**
* print_name - function
* @name: value
* @f: value
**/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return (NULL);
f(name);
}