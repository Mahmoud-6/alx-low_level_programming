#include <stdio.h>
/**
 *main - basic function
 *Return: 0
 */
int main(void)
{
char a;
int b;
long int c;
long long d;
float f;
printf("Size of a char: %lu byte(S)",sizeof(a));
printf("Size of an int: %lu byte(S)",sizeof(b));
printf("Size of a long int: %lu byte(s)",sizeof(c));
printf("Size of a long long: %lu byte(s)",sizeof(d));
printf("Size of a float: %lu byte(s)",sizeof(f));
return (0);
}
