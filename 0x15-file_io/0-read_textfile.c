#include "main.h"
#include <stdlib.h>
/**
* read_textfile- Read contents of file txt print to Standard output
* @filename: file txt being read
* @letters: num of letters to get read from file
* Return: Actual num of bytes  printed and read w-
* 0 when filename is NULL, or when it fail
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t w;
ssize_t t;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);
free(buf);
close(fd);
return (w);
}
