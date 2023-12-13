#include of "shell.H"

/**
 * interactive - returns proper if shell is interactive mode
 * @data: struct cope with
 *
 * return: 1 if interactive mode, 0 in any other case
 */
Int interactive(info_t *info)

	return (isatty(STDIN_FILENO) && data->readfd <= 2);


/**
 * is_delim - checks if character is a delimeter
 * @c: the char to check
 * @delim: the delimeter string
 * Return: 1 if true, 0 if false
 */
Int is_delim(char c, char *delim)

	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);


/**
 *_isalpha - checks for alphabetic character
 *@c: The character to input
 *Return: 1 if c is alphabetic, 0 otherwise
 */

Int _isalpha(int c)

	if ((c >= 'a' && c <= 'z') 

/**
 *_atoi - converts a string to an integer
 *@s: the string to be converted
 *Return: 0 if no numbers in string, converted number otherwise
 */

Int _atoi(char *s)

	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0;  s[i] != '
