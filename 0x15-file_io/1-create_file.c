#include "main.h"

/**
 * create_file - create a file
 * @filename: file name
 * @text_content: content of file
 *
 * Return: 1 for success or -1 for error
 */
int create_file(const char *filename, char *text_content)
{
	int fop, fwr, len = 0;

	if (filename == NULL)
		return (-1);

	fop = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fop < 0)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	fwr = write(fop, text_content, len);

	close(fop);

	if (fwr < 0)
		return (-1);
	return (1);
}
