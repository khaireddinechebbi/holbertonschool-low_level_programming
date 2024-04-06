#include "main.h"
/**
 * read_textfile - function name
 * @filename: The file's name.
 * @letters: The file's length
 * Return: 1 or -1
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *str = NULL;
int x, y, error = -1;

if (filename)
{
x = open(filename, O_RDONLY);
str = malloc(sizeof(char) * letters);
if (x > 0 && str)
{
y = read(x, str, letters);
if (y >= 0 && (size_t)y <= letters)
error = write(STDOUT_FILENO, str, y);
close(x);
}
}
free(str);
return ((error >= 0 && error == y) ? error : 0);
}