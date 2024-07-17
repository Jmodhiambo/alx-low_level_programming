#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words from.
 *
 * Return: Number of words (tokens).
 */
static int count_words(char *str)
{
    int count = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
            count++;
        i++;
    }

    return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: Pointer to an array of strings (words) or NULL.
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, len, words_count;

    if (str == NULL || *str == '\0')
        return (NULL);

    words_count = count_words(str);
    words = (char **)malloc((words_count + 1) * sizeof(char *));
    if (words == NULL)
        return (NULL);

    i = 0;
    while (i < words_count)
    {
        while (*str == ' ')
            str++;
        len = 0;
        while (str[len] != ' ' && str[len] != '\0')
            len++;
        words[i] = (char *)malloc((len + 1) * sizeof(char));
        if (words[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(words[j]);
            free(words);
            return (NULL);
        }
        for (k = 0; k < len; k++)
            words[i][k] = *str++;
        words[i][k] = '\0';
        i++;
    }
    words[i] = NULL;

    return (words);
}

