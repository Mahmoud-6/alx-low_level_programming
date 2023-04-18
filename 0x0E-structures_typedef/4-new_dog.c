#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - function
 * @name: variable
 * @age: variable
 * @owner: variable
 * Return: result
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int n, o, i;
dog_t *d;
n = o = 0;
while (name[n])
{
n++;
}
while (owner[o])
{
o++;
}
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
(*d).name = malloc(n * sizeof((*d).name));
if (d == NULL)
return (NULL);
for (i = 0; i < n; i++)
(*d).name[i] = name[i];
(*d).age = age;
(*d).owner = malloc(o * sizeof((*d).owner));
if (d == NULL)return (NULL);
for (i = 0; i < o; i++)
(*d).owner[i] = owner[i];
return (d);
}
