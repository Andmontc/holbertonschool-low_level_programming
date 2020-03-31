#include "holberton.h"
/**
 * append_text_to_file - Function that appends a text
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 sucess -1 fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
		int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		len++;
	}

	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);
	return (1);
}
