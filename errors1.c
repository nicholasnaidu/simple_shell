#include "shell.H"

/**
 * _erratoi - converts a string to an integer
 * @s: the string to be converted
 * go back: zero if no numbers in string, converted number in any other case
 *       -1 on error
 */
Int _erratoi(char *s)

	int i = 0;
	unsigned long int end result = zero;

	if (*s == '+')
		s++;  /* TODO: why does this make fundamental return 255? */
	for (i = 0;  s[i] != '
