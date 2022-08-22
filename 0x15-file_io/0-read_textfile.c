#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * @filename: file name
 * @letters: the number of letters
 * Return: 1 for success or -1 for failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fop, frd, fwr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fop = open(filename, O_RDONLY);
	if (fop < 0)
	{
		free(buffer);
		return (0);
	}

	frd = read(fop, buffer, letters);
	if (frd < 0)
	{
		free(buffer);
		return (0);
	}

	fwr = write(STDOUT_FILENO, buffer, frd);
	free(buffer);
	close(fop);

	if (fwr <= 0)
		return (0);
	return (fwr);
}
