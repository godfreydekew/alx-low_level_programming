#include "main.h"

/**
	* read_textfile - function that reads a text file and prints it to the POSIX
	* standard output.
	*
	* @filename: The name of the file to read.
	* @letters: The number of letters to read and print.
	*
	* Return: The number of letters successfully printed to the standard output.
	*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t no_read, no_wrote;
	char *buff;

	if (!filename)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buff = malloc(letters);

	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	no_read = read(fd, buff, letters);

	if (no_read == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	no_wrote = write(STDOUT_FILENO, buff, no_read);

	close(fd);
	free(buff);

	return (no_wrote);
}
