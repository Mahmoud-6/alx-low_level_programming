#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function
 * @d: variable
 * @name: variable
 * @age: variable
 * @owner: variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
