#include "main.h"
/**
 * read_textfile - function
 * @filename: value
 * @letters: value
 * Return: result
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t ope, rea, writ;
char *buffer;
if (filename == NULL)
return (0);
buffer = malloc(sizeof(char) * letters);
if(buffer == NULL)
return (0);
ope = open(filename, O_RDONLY);
rea = read(ope, buffer, letters);
writ = write(STDOUT_FILENO, buffer, rea);
if (ope == -1 || rea == -1 || writ == -1)
{
free(buffer);
return (0);
}
free(buffer);
close(ope);
return (writ);
}
