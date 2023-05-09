#include "main.h"
/**
 * create_file - function
 * @filename: value
 * @text_content: value
 * Return: result
 */
int create_file(const char *filename, char *text_content)
{
int ope, writ, l = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (l = 0; text_content[l];)
l++;
}
ope = open(filename, O_WRONLY | O_APPEND);
writ = write(ope, text_content, l);
if (ope == -1 || writ == -1)
return (-1);
close(ope);
return (1);
}
