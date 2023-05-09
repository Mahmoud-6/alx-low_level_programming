#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
#define READ_ERR "Error: Can't read from file %s\n"
#define WRITE_ERR "Error: Can't write to %s\n"
/**
 * main - main function
 * @argc: value
 * @argv: value
 * Return: result
 */
int main(int argc, char **argv)
{
int f, t, on_c, writ, rea;
char buffer[1024];
if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
t = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (t == -1)
dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
f = open(argv[1], O_RDONLY);
if (f == -1)
dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
while (1)
{
rea = read(f, buffer, 1024);
if (rea == -1)
dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
if (rea > 0)
{
writ = write(t, buffer, rea);
if (writ == -1)
dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
}
else
break;
}
on_c = close(f);
if (on_c == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f), exit(100);
on_c = close(t);
if (on_c == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", t), exit(100);
return (0);
}
