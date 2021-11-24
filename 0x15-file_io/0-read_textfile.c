#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: name of file to read
 * @letters: letters to read in filename
 * Return: The number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t LettersNumber;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	LettersNumber = read(fd, buffer, letters);
	if ((int)LettersNumber == -1)
		return (0);

	write(STDOUT_FILENO, buffer, LettersNumber);

	close(fd);
	free(buffer);

	return (LettersNumber);
}
