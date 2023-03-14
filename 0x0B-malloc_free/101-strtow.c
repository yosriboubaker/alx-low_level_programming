#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * count_words - counts the number of words in a string
 * @str: the string to count words from
 *
 * Return: the number of words in @str
 */
int count_words(char *str)
{
	int i, count = 0, len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}
	return (count);
}
/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: a pointer to an array of strings (words), or NULL if str == NULL or
 * if memory allocation fails
 */
char **strtow(char *str)
{
	int i, j = 0, k, len = 0, words_count = 0;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	len = strlen(str);
	words_count = count_words(str);

	if (!words_count)
		return (NULL);
	words = (char **) malloc((words_count + 1) * sizeof(char *));
	if (!words)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		while (str[i] == ' ' && str[i])
			i++;

		if (str[i] == '\0')
			break;

		k = i;

		while (str[i] != ' ' && str[i])
			i++;

		words[j] = (char *) malloc((i - k + 1) * sizeof(char));
		if (!words[j])
			return (NULL);

		strncpy(words[j], str + k, i - k);
		words[j][i - k] = '\0';
		j++;
	}
	words[j] = NULL;
	return (words);
}
