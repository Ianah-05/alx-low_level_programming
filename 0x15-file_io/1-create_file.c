#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: the string length to check
 *
 * Return: integer lenght of string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - a function that creates a file
 * @filename: name of file
 * @text_content: text to write
 *
 * Return: 1 on success 0 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp == -1)
		return (-1);
	if (len)
		bytes = write(fp, text_content, len);
	close(fp);
	return (bytes == len ? 1 : -1);
}
