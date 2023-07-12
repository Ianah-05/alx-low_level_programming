#include <stdlib.h>
#include "main.h"

/**
 * count_word - Counts the number of words in a string
 * @s: string to count
 *
 * Return: number of words
 */

int count_word(char *s)
{
	int flag, l, p;

	flag = 0;
	p = 0;

	for (l = 0; s[l] != '\0'; l++)
	{
		if (s[l] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			p++;
		}
	}

	return (p);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, j = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[j] = tmp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[j] = NULL;

	return (matrix);
}
