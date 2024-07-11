#include "main.h"
#include <string.h>

/**
* is_palindrome - checks if a string is a palindrome.
* @s: the string to check.
*
* Return: 1 if the string is a palindrome, 0 otherwise.
*/
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
		return (1);
	return (palindrome_helper(s, 0, len - 1));
}

/**
* palindrome_helper - recursive helper function to check palindrome.
* @s: the string to check.
* @start: the starting index.
* @end: the ending index.
*
* Return: 1 if the string is a palindrome, 0 otherwise.
*/
int palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (palindrome_helper(s, start + 1, end - 1));
}
