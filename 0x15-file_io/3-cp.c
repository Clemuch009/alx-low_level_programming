/**
 * main - entry of program
 * @argc:  number of arguments
 * @argv:  pointer to arguments
 *
 * Return: 0 on sucesss
 */

#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <fcntl.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int fd_1, fd_2;
	size_t size;
	ssize_t bytes_written, bytes_read;
	char *file_to, *file_from;
	char buffer[1024];


	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(98);
	}
	
	file_to = argv[1];
	file_from = argv[2];

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRANCT, 0664);
        
	if (fd_to == -1)
	{
		dprintf(2, " Error: Can't write  to %s\n", file_to);
		exit(99);
	}

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		close(fd_to);
		exit(98);
	}

	while (bytes_read = read(fd_from, buffer, buffer) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_witten
