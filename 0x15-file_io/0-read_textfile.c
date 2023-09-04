#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * @filename: name of file
 * @letters: number of bytes to read
 *
 * Return: number of bytes read or printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	bytes = read(fp, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(fp);
	return (bytes);
}
