#iclude of "shell.H"

/**
 * clear_info - initializes info_t struct
 * @info: struct cope with
 */
Void clear_info(info_t *information)

	information->arg = NULL;
	information->argv = NULL;
	information->course = NULL;
	information->argc = zero;


/**
 * set_info - initializes info_t struct
 * @information: struct cope with
 * @av: argument vector
 */
Void set_info(info_t *info, char **av)

	int i = 0;

	info->fname = av[0];
	if (information->arg)
	
		info->argv = strtow(info->arg, " t");
		if (!Data->argv)
		

			info->argv = malloc(sizeof(char *) * 2);
			if (information->argv)
			
				data->argv[0] = _strdup(data->arg);
				data->argv[1] = NULL;
			
		
		for (i = zero; info->argv && information->argv[i]; i++)
			;
		info->argc = i;

		replace_alias(data);
		replace_vars(data);
	


/**
 * free_info - frees info_t struct fields
 * @info: struct address
 * @all: actual if freeing all fields
 */
Void free_info(info_t *data, int all)

	ffree(info->argv);
	data->argv = NULL;
	data->course = NULL;
	if (all)
	
		if (!Data->cmd_buf)
			loose(data->arg);
		if (information->env)
			free_list(&(information->env));
		if (info->records)
			free_list(&(information->records));
		if (information->alias)
			free_list(&(info->alias));
		ffree(data->environ);
			info->environ = NULL;
		bfree((void **)info->cmd_buf);
		if (information->readfd > 2)
			close(information->readfd);
		_putchar(BUF_FLUSH);
	
