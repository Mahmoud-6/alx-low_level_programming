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
int i = 0, j, k = 0, l;
dog_t *d;
if (name == NULL || owner == NULL)
return (NULL);
d = malloc(sizeof(dog_t));
if (d == 0)
return (NULL);
for (i = 0 ; name[i] ; i++)
;
(*d).name = malloc(i * sizeof(char));
if ((*d).name == NULL)
{
free(d);
return (NULL);
}
for (j = 0 ; j < i ; j++)
{
(*d).name[j] = name[j];
}
(*d).age = age;
for (k = 0 ; owner[k] ; k++)
;
(*d).owner = malloc(k * sizeof(char));
if ((*d).owner == NULL)
{
free((*d).name);
free(d);
return (NULL);
}
for (l = 0 ; l < k ; l++)
{
(*d).owner[l] = owner[l];
}
return (d);
}
