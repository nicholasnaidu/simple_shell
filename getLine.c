#include "shell.H"

/**
 * input_buf - buffers chained commands
 * @information: parameter struct
 * @buf: deal with of buffer
 * @len: cope with of len var
 *
 * go back: bytes read
 */
Ssize_t input_buf(info_t *data, char **buf, size_t *len)

	ssize_t r = 0;
	size_t len_p = zero;

	if (!*len) /* if nothing left inside the buffer, fill it */
	
		/*bfree((void **)information->cmd_buf);*/
		loose(*buf);
		*buf = NULL;
		signal(SIGINT, sigintHandler);
#if USE_GETLINE
		r = getline(buf, &len_p, stdin);
#else
		r = _getline(information, buf, &len_p);
#endif
		if (r > 0)
		
			if ((*buf)[r - 1] == 'n')
			
				(*buf)[r - 1] = '
