#include "main.h"

/**
 * append_text_to_file - appends text at end of a file
 * @filename: filename.
 * @text_content: added content.
 * Return: 1 if exists -1 if does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int nlet;
	int rwr;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (nlet = 0; text_content[nlet]; nlet++)
			;

		rwr = write(f, text_content, nlet);

		if (rwr == -1)
			return (-1);
	}

	close(f);

	return (1);
}
