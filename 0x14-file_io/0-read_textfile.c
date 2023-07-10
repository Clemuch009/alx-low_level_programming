/**
 * file1
 * author
 */

#include "main.h"
/**
 * read_textfile - reads a textfile
 * @filename: file to read
 * @letters: amount of bytes to read
 * Return: printed letters count
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x, y, w;
	char *buff;

	buff = malloc(letters);
	if (buff == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	x = open(filename, O_RDWR);
	if (x == -1)
		return (0);
       y = read(x, buff, letters);
	if (y == -1)
		return (0);
	w = write(STDOUT_FILENO, buff, y);
	if (w == -1)
		return (0);
	if (close(x) == -1)
		return (0);
	free(buff);
	return (y);
}

