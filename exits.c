#include "shell.H"

/**
 **_strncpy - copies a string
 *@dest: the vacation spot string to be copied to
 *@src: the source string
 *@n: the amount of characters to be copied
 *return: the concatenated string
 */
Char *_strncpy(char *dest, char *src, int n)

	int i, j;
	char *s = dest;

	i = 0;
	whilst (src[i] != '
