#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: file name
 * @text_content: content of the file
 *
 * Return: 1 for success or -1 for error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fop, i, len = 0, fwr;

	if (filename == NULL)
		return (-1);

	fop = open(filename, O_RDWR | O_APPEND);
	if (fop <= 0)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			len++;
		fwr = write(fop, text_content, len);
		close(fop);
		if (fwr <= 0)
			return (-1);
	}
	close(fop);
	return (1);
}
