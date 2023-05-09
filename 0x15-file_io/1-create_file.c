#include "main.h"
/**
 * read_textfile - function
 * @filename: value
 * @text_content: value
 * Return: result
 */
int append_text_to_firle(const char *filename, char *text_content)
{
int ope, write, l = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (l = 0; text_content[l];)
l++;
}
ope = open(filename, O_WRONLY | O_APPEND);
write = write(ope, text_content, l);
if (ope == -1 || write == -1)
return (-1);
close(ope);
return (1);
}
