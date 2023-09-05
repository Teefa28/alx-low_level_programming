#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read and print text file.
 * @filename: text file being read and print
 * @letters: number of letters to read and print
 * Return: 0 if the file can not be opened or read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file;
	ssize_t w;
	ssize_t t;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(file, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(file);
	return (w);
}
