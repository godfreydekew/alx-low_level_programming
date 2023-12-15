#include"main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: The name of the file to which text will be appended.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, text_length, wr_retrn;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (text_length = 0; text_content[text_length]; text_length++);

		wr_retrn = write(fd, text_content, text_length);

		if (wr_retrn == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
