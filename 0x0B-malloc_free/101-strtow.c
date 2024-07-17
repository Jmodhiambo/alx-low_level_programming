#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str: the input string
 *
 * Return: pointer to an array of strings (words), NULL on failure
 */
char **strtow(char *str)
{
        char **words;
        int i, j, k, word_count, len;

        if (str == NULL || *str == '\0')
                return (NULL);

        /* Count the number of words in str */
        for (i = 0, word_count = 0; str[i] != '\0'; i++)
        {
                /* Skip spaces */
                while (str[i] == ' ')
                        i++;
                /* Count word */
                if (str[i] != '\0' && str[i] != ' ')
                        word_count++;
                /* Skip until end of word */
                while (str[i] != '\0' && str[i] != ' ')
                        i++;
        }

        /* Allocate memory for the array of words */
        words = (char **)malloc((word_count + 1) * sizeof(char *));
        if (words == NULL)
                return (NULL);

        /* Extract each word into the array */
        for (i = 0, k = 0; k < word_count; k++)
        {
                /* Skip spaces */
                while (str[i] == ' ')
                        i++;
                /* Calculate length of current word */
                for (len = 0; str[i + len] != '\0' && str[i + len] != ' '; len++)
                        ;
                /* Allocate memory for the word */
                words[k] = (char *)malloc((len + 1) * sizeof(char));
                if (words[k] == NULL)
                {
                        /* Free previously allocated memory on failure */
                        for (j = 0; j < k; j++)
                                free(words[j]);
                        free(words);
                        return (NULL);
                }
                /* Copy the word into words[k] */
                for (j = 0; j < len; j++)
                        words[k][j] = str[i + j];
                words[k][j] = '\0'; /* Null-terminate the word */
                i += len; /* Move to the next word */
        }

        words[word_count] = NULL; /* Null-terminate the array of words */

        return (words);
}

