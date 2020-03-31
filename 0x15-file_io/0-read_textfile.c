#include "holberton.h"
/**
 * read_textfile - Function that open, read and write a file
 * @filename: name of the file
 * @letters: number of characters
 * Return: write
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters); /* buffer que almacena el texto */
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY); /*abrir el archivo en modo lectura */
	r = read(fd, buffer, letters); /*lee el archivo con numero de caracteres */
	w = write(STDOUT_FILENO, buffer, r);	/*escribir el standard output*/

	if (fd == -1 || r == -1 || w == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (w);
}
