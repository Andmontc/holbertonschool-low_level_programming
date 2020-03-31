#include "holberton.h"
/**
 * create_file - function that creates a file
 * @filename: Name of the file
 * @text_content: Content of the file
 * Return: 1 sucess, -1 fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

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
