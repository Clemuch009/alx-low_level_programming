/*
 *@int create_file:t creates a file.
 *@const char *filename:name of the file
 *@char *text_content:context to write in the file
 *returns int;
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int create_file(const char *filename, char *text_content)
{
	if(filename == NULL)
	{
		return (-1);
	}

	int fd = open(filename, O_CREAT|O_WRONLY|O_TRANC, 0600);
	if(fd == -1)
	{
		return (-1);
	}
	if(text_content == NULL)
	{
		return (-1);
	}

	ssize_t buf = strlen(text_content);

	ssize_t bytes_written = write(fd, text_content, buf);
	if(bytes_written == -1 || (size_t)bytes_written != buf)
	{
	       close(fd);
	       return (-1);
	}
	else
		return (1);
	close(fd);
	return(1);
}
