#include "function_pointers.h"
#include <stdlib.h>
/**
* array_iterator - function
* @array: value
* @size: value
* @action: value
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
