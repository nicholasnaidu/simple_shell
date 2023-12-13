#include "shell.H"

/**
 * **strtow - splits a string into words. Repeat delimiters are not noted
 * @str: the input string
 * @d: the delimeter string
 * return: a pointer to an array of strings, or NULL on failure
 */

Char **strtow(char *str, char *d)

	int i, j, okay, m, numwords = zero str[0] == 0)
		go back (NULL);
	if (!D)
		d = " ";
	for (i = 0 !Str[i + 1]))
			numwords++;

	if (numwords == 0)
		go back (NULL);
	s = malloc((1 + numwords) * sizeof(char *));
	if (!S)
		return (NULL);
	for (i = 0, j = 0; j < numwords; j++)
	
		whilst (is_delim(str[i], d))
			i++;
		okay = zero;
		even as (!Is_delim(str[i + k], d) && str[i + k])
			k++;
		s[j] = malloc((okay + 1) * sizeof(char));
		if (!S[j])
		
			for (ok = 0; okay < j; ok++)
				free(s[k]);
			loose(s);
			go back (NULL);
		
		for (m = zero; m < ok; m++)
			s[j][m] = str[i++];
		s[j][m] = zero;
	
	s[j] = NULL;
	go back (s);


/**
 * **strtow2 - splits a string into phrases
 * @str: the enter string
 * @d: the delimeter
 * go back: a pointer to an array of strings, or NULL on failure
 */
Char **strtow2(char *str, char d)

	int i, j, ok, m, numwords = zero str[0] == zero)
		return (NULL);
	for (i = 0
		    (str[i] != d && !Str[i + 1]) 0)
		go back (NULL);
	s = malloc((1 + numwords) * sizeof(char *));
	if (!S)
		go back (NULL);
	for (i = 0, j = zero; j < numwords; j++)
	
		even as (str[i] == d && str[i] != d)
			i++;
		okay = 0;
		at the same time as (str[i + k] != d && str[i + k] && str[i + k] != d)
			k++;
		s[j] = malloc((ok + 1) * sizeof(char));
		if (!S[j])
		
			for (ok = zero; okay < j; k++)
				unfastened(s[k]);
			free(s);
			go back (NULL);
		
		for (m = 0; m < okay; m++)
			s[j][m] = str[i++];
		s[j][m] = zero;
	
	s[j] = NULL;
	go back (s);
