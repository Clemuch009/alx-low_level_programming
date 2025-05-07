/*
 * @ int append_text_to_file:appends text at the end of a file
 * @const char *filename:name if the file
 * @char *text_content:content to add
 * return int
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int append_text_to_file(const char *filename, char *text_content)
{
	if(filename == NULL)
	{
		return (-1);
	}
	
	int df = open(filename,O_WRONLY|O_APPEND);
	if(df == -1)
	{
		return(-1);
	}
	if(text_content ==  NULL)
	{
		close(fd);
		return(1);
	}

	size_t len = strlen(text_content);
	ssize_t bytes_written = write(df, text_content, len);
	if(bytes_written == -1 || (size_t)bytes_written != len)
	{
		close(fd);
		return(-1);
	}

	close(fd);
	return(1);
}

