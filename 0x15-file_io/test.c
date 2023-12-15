#include "main.h"

/**
 * create_file - Function that creates a file with the given filename
 * and writes the content from text_content into the file.
 *
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
        int wr_retrn;
        int text_length = 0;

        if (!filename)
		 return (-1);

	 fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0666);

	if (fd == -1)
		return (-1);

	 if (text_content == NULL)
		text_content = "";

	for (text_length = 0; text_content[text_length]; text_length++);

	 wr_retrn = write(fd, text_content, text_length);

	if (wr_retrn == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
