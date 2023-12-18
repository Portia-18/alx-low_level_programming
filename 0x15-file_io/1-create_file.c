#include "main.h"

/**
 * create_file - creates file
 * @filename: filename.
 * @text_content: contnt written in the file.
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int nlet;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nlet = 0; text_content[nlet]; nlet++)
		;

	rwr = write(f, text_content, nlet);

	if (rwr == -1)
		return (-1);

	close(f);

	return (1);
}
