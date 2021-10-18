#include "main.h"

/**
 * read_textfile - reads a textfile and print std/o
 * @filename: name of the file
 * @letters: number of letters in the textfile
 * Return:  fail/NULL return(0) else actual size
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t f_read, f_wrote;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	f_read = read(fd, buffer, letters);
	if (f_read < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[f_read] = '\0';
	close(fd);

	f_wrote = write(STDOUT_FILENO, buffer, f_read);
	if (f_wrote < 0)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	return (f_wrote);

}
