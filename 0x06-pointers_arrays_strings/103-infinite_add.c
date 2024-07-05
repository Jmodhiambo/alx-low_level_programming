#include "main.h"

/**
* infinite_add - Adds two numbers stored as strings.
* @n1: The first number.
* @n2: The second number.
* @r: The buffer to store the result.
* @size_r: The buffer size.
*
* Return: A pointer to the result if successful, otherwise 0.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, i, j, k, sum, carry = 0;

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;

	if (size_r <= (len1 > len2 ? len1 : len2) + 1)
		return (0);

	r[size_r - 1] = '\0';
	i = len1 - 1;
	j = len2 - 1;
	k = size_r - 2;

	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';
		r[k--] = (sum % 10) + '0';
		carry = sum / 10;
	}

	if (k >= 0)
	{
		for (i = 0; r[k + 1 + i]; i++)
			r[i] = r[k + 1 + i];
		r[i] = '\0';
	}

	return (r);
}
