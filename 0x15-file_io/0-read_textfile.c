#include "main.h"
/**
 * read_textfile - function
 * @filename: value
 * @letters: value
 * Return: result
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t open, read, write;
char *buffer;
if (filename == NULL)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);
open = open(filename, O_RDONLY);
read = read(open, buffer, letters);
write = write(STDOUT_FILENO, buffer, read);
if (open == -1 || read == -1 || write == -1)
{
free(buffer);
return (0);
}
free(buffer);
close(open);
return (write);
}
