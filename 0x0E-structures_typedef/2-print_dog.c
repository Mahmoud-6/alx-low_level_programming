#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - function
 * @d: variable
 */
void print_dog(struct dog *d)
{
char* p = NULL;
if (d == NULL)
{
printf("%s",p);
}
else if (d)
{
(*d).name ? printf("Name: %s\n", (*d).name) : printf("Name: (nil)");
printf("Age: %f\n", (*d).age);
(*d).owner ? printf("Owner: %s\n", (*d).owner) : printf("Owner: (nil)\n");
}
}
