#include "main.h"
/**
 * rev_string - function
 * @s: variable that contain value
 * Return: Null
 */
void rev_string(char *s)
{
  int c = 0,i,j;
 
  while (s[c] != '\0')
    {
      c++;
      j++;
    }
  char p[c] = *s;
  for (i = 0 ; i <= c ; i++,j--)
    {
      p[i] = s[j];
    }
}
