#include "main.h"

/**
 * read_textfile - reads file and prints letters
 * @filename: filename.
 * @letters: no of letters printed.
 * Return: nos of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t nrd, nwr;
	char *buff;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	nrd = read(f, buff, letters);
	nwr = write(STDOUT_FILENO, buff, nrd);

	close(f);

	free(buff);

	return (nwr);
}
