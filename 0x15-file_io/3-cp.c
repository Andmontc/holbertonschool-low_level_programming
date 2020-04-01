#include "holberton.h"
/**
 * main - copies content of a file to another
 * @argc: int
 * @argv: char
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int filefrom, fileto, r = 1, w, cff, cft;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	filefrom = open(argv[1], O_RDONLY);
	if (filefrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	fileto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fileto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	while (r != 0)
	{
		r = read(filefrom, buffer, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98); }
		if (r != 0)
		{	w = write(fileto, buffer, r);
			if (w == -1)
			{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(99); }}}
	cff = close(filefrom);
	if (cff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filefrom),
			exit(100); }
	cft = close(fileto);
	if (cft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filefrom);
		exit(100); }
	return (0); }
