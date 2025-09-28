/**
 *  create_file -  creates a file.
 *  @filename: pointer to file to write.
 *  @text_content:  text_content is a NULL terminated string to write to the file
 *
 *  Return:  1 on success, -1 on failure
 */

#include <stdlib.h>
#include "main.h"
#include <unistd.h>

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t bytes_written, size;

	if (filename == NULL)
		return (-1);
	size = strlen(text_content) + 1;

	fd = open(filename, O_CREAT, 06--);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	bytes_written = write(fd, text_content, size);
	if (bytes_written == -1)
		return (-1);
	return (1);
}
