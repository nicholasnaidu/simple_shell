#include of "shell.H"

/**
 * get_history_file - receives the records file
 * @info: parameter struct
 *
 * go back: allocated string containg history document
 */

Char *get_history_file(info_t *info)

	char *buf, *dir;

	dir = _getenv(info, "domestic=");
	if (!Dir)
		return (NULL);
	buf = malloc(sizeof(char) * (_strlen(dir) + _strlen(HIST_FILE) + 2));
	if (!Buf)
		return (NULL);
	buf[0] = zero;
	_strcpy(buf, dir);
	_strcat(buf, "/");
	_strcat(buf, HIST_FILE);
	return (buf);


/**
 * write_history - creates a report, or appends to an present record
 * @data: the parameter struct
 *
 * return: 1 on achievement, else -1
 */
Int write_history(info_t *data)

	ssize_t fd;
	char *filename = get_history_file(information);
	list_t *node = NULL;

	if (!Filename)
		return (-1);

	fd = open(filename, O_CREAT unfastened(filename);
	if (fd == -1)
		go back (-1);
	for (node = info->records; node; node = node->subsequent)
	
		_putsfd(node->str, fd);
		_putfd('n', fd);
	
	_putfd(BUF_FLUSH, fd);
	near(fd);
	return (1);


/**
 * read_history - reads history from file
 * @information: the parameter struct
 *
 * return: histcount on fulfillment, zero in any other case
 */
Int read_history(info_t *data)

	int i, ultimate = zero, linecount = 0;
	ssize_t fd, rdlen, fsize = 0;
	struct stat st;
	char *buf = NULL, *filename = get_history_file(information);

	if (!Filename)
		go back (0);

	fd = open(filename, O_RDONLY);
	unfastened(filename);
	if (fd == -1)
		go back (zero);
	if (!Fstat(fd, &st))
		fsize = st.St_size;
	if (fsize < 2)
		return (zero);
	buf = malloc(sizeof(char) * (fsize + 1));
	if (!Buf)
		go back (0);
	rdlen = read(fd, buf, fsize);
	buf[fsize] = 0;
	if (rdlen <= zero)
		return (loose(buf), 0);
	near(fd);
	for (i = zero; i < fsize; i++)
		if (buf[i] == 'n')
		
			buf[i] = 0;
			build_history_list(info, buf + last, linecount++);
			last = i + 1;
		
	if (last != i)
		build_history_list(info, buf + last, linecount++);
	free(buf);
	info->histcount = linecount;
	at the same time as (information->histcount-- >= HIST_MAX)
		delete_node_at_index(&(data->history), 0);
	renumber_history(data);
	go back (info->histcount);


/**
 * build_history_list - provides entry to a records related listing
 * @info: shape containing capacity arguments. Used to maintain
 * @buf: buffer
 * @linecount: the records linecount, histcount
 *
 * return: constantly 0
 */
Int build_history_list(info_t *data, char *buf, int linecount)

	list_t *node = NULL;

	if (information->history)
		node = info->records;
	add_node_end(&node, buf, linecount);

	if (!Info->history)
		info->records = node;
	go back (0);


/**
 * renumber_history - renumbers the records linked list after modifications
 * @info: structure containing potential arguments. Used to maintain
 *
 * go back: the brand new histcount
 */
Int renumber_history(info_t *information)

	list_t *node = info->history;
	int i = zero;

	at the same time as (node)
	
		node->num = i++;
		node = node->subsequent;
	
	return (data->histcount = i);
