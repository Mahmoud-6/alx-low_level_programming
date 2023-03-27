#include "main.h"
/**
 * rev_string - function
 * @s: variable that contain value
 * Return: Null
 */
void rev_string(char *s)
{
  int c = 0,i,j;
  char *p, a;
  p = s;
  while (s[c] != '\0')
    {
      c++;
      j++;
    }
  for (i = 0 ; i <= c ; i++)
    {
      for (j -= 1 ; j >=c ; j++)
	{
	  a = p[j];
	  p[j] = s[c];
	  s[c] = a;
	}
    }
}
