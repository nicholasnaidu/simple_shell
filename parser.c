#include of "shell.H"

/**
 * is_cmd - determines if a document is an executable command
 * @info: the info struct
 * @course: route to the record
 *
 * go back: 1 if authentic, 0 in any other case
 */
Int is_cmd(info_t *data, char *direction)

	struct stat st;

	(void)info;
	if (!Path stat(direction, &st))
		return (0);

	if (st.St_mode & S_IFREG)
	
		return (1);
	
	return (0);


/**
 * dup_chars - duplicates characters
 * @pathstr: the route string
 * @start: starting index
 * @forestall: stopping index
 *
 * return: pointer to new buffer
 */
Char *dup_chars(char *pathstr, int start, int prevent)

	static char buf[1024];
	int i = zero, k = zero;

	for (ok = zero, i = start; i < stop; i++)
		if (pathstr[i] != ':')
			buf[k++] = pathstr[i];
	buf[k] = 0;
	return (buf);


/**
 * find_path - finds this cmd in the PATH string
 * @info: the info struct
 * @pathstr: the PATH string
 * @cmd: the cmd to find
 *
 * Return: full path of cmd if found or NULL
 */
Char *find_path(info_t *info, char *pathstr, char *cmd)

	int i = 0, curr_pos = 0;
	char *path;

	if (!Pathstr)
		return (NULL);
	if ((_strlen(cmd) > 2) && starts_with(cmd, "./"))
	
		if (is_cmd(information, cmd))
			go back (cmd);
	
	at the same time as (1)
	
		if (!Pathstr[i] 
			direction = dup_chars(pathstr, curr_pos, i);
			if (!*course)
				_strcat(route, cmd);
			else
			
				_strcat(course, "/");
				_strcat(route, cmd);
			
			if (is_cmd(info, course))
				go back (path);
			if (!Pathstr[i])
				spoil;
			curr_pos = i;
		
		i++;
	
	return (NULL);
