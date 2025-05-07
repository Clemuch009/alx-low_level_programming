/*
 *
 *
 *
 */

int cp file_from file_to(char *str1, char *str2)
{
	int fd_1, fd_2;
	ssize_t bytes_read;
	size_t bytes_written;
	char buffer[1024];

	fd_1 = open(str1, O_RDONLY);
	if(fd_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error : can't read from file %s\n", str1);
		exit(98);
	}

	fd_2 = open(str2, O_CREAT|O_WRONLY|O_TRANC, 0664);
	if(fd_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error : can't write to %s\n", str2);
		close(fd_2)
		exit(99);
	}
}


int main(int argc, char argv[])
{
	ssize_t bytes_read;
        size_t bytes_written;
        char buffer[1024];

	if(argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage ; cp file_from file_to\n");
		exit(97);
	}

	if(cp file_from file_to(argv[i]) && cp file_from file_to(argv[2]))
	{
		while((bytes_read = read(fd_1, buffer, 1024)) > 0)
		{
			if(bytes_read = -1)
			{
				close(fd_1);
				return (-1);
			}
			
			bytes_written = write(fd_2, buffer, bytes_read);
			if(bytes_written == -1)
			{
				close(fd_1);
				return(-1);
			}
		}
	}

        close(fd_1);
        if(!close(fd_1))
        {
                dprintf(STDERR_FILENO, "Error : can't close %d\n", fd_1);
                exit(100);
        }
        close(fd_2);
        if(!close(fd_2))
        {
                dprintf(STDERR_FILENO,"Error : can't close %d\n", fd_2);
                exit(100);
	}
}








