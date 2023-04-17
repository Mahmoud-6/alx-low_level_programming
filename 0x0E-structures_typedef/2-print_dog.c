#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - function
 * @d: variable
 */
void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", (*d).name) : printf("Name: (nil)");
printf("Age: %f\n", (*d).age);
printf("Owner: %s\n", (*d).owner) : printf("Owner: (nil)\n");
}
}
