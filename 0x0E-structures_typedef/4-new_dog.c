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
dog_t *dog;
int i, j, l, k;
i = j = 0;
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
if (name != NULL)
{
while (name[i] != NULL)
{
i += 1;
}
}
if (owner != NULL)
{
while (owner[j] != '\0')
j += 1;
}
(*dog).name = malloc(i *sizeof(char) + 1);
if ((*dog).name == NULL)
{
free(dog);
return (NULL);
}
(*dog).owner = malloc(j *sizeof(char) + 1);
if ((*dog).owner == NULL)
{
free((*dog).name);
free(dog);
return (NULL);
}
for (k = 0; k < i; k += 1)
(*dog).name[k] = name[k];
for (l = 0; l < j; l += 1)
(*dog).owner[l] = owner[l];
(*dog).name[k] = '\0';
(*dog).owner[l] = '\0';
(*dog).age = age;
return (_dog);
}
