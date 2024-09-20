/**
 * keygen5 - Generates a key based on the provided username
 * @username: the username to generate a key for
 *
 * Return: void (prints the key)
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
        if (argc != 2)
        {
                printf("Usage: %s username\n", argv[0]);
                return (1);
        }

        char *username = argv[1];
        int len = strlen(username);
        int key = 0;

        for (int i = 0; i < len; i++)
        {
                key += username[i];
        }

        key = (key ^ 0x4f) & 0xff;  // Hypothetical transformation

        printf("%d\n", key);
        return (0);
}
