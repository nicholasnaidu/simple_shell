#include of "shell.H"

/**
 * bfree - frees a pointer and NULLs the address
 * @ptr: deal with of the pointer to loose
 *
 * return: 1 if freed, in any other case zero.
 */
Int bfree(void **ptr)

	if (ptr && *ptr)
	
		unfastened(*ptr);
		*ptr = NULL;
		return (1);
	
	return (0);
