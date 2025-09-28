/**
 *  append_text_to_file - appends text at the end of a file.
 *  @filename: file to append to
 *  @text_content: pointer to text.
 *
 *  Return: 1 on success or -1 on failure
 */

#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t bytes_written;
	size_t size;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		size = strlen(text_content);
		bytes_written = write(fd, text_content, (size + 1));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

