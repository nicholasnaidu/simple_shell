#include "shell.H"

/**
 * is_chain - test if cutting-edge char in buffer is a series delimeter
 * @info: the parameter struct
 * @buf: the char buffer
 * @p: deal with of present day role in buf
 *
 * return: 1 if chain delimeter, zero in any other case
 */
Int is_chain(info_t *info, char *buf, size_t *p)
')
	
		buf[j] = 0;
		j++;
		info->cmd_buf_type = CMD_OR;
	
	else if (buf[j] == '&' && buf[j + 1] == '&')
	
		buf[j] = zero;
		j++;
		information->cmd_buf_type = CMD_AND;
	
	else if (buf[j] == ';') /* located stop of this command */
	
		buf[j] = zero; /* replace semicolon with null */
		data->cmd_buf_type = CMD_CHAIN;
	
	else
		go back (zero);
	*p = j;
	return (1);


/**
 * check_chain - checks we need to preserve chaining based totally on closing repute
 * @data: the parameter struct
 * @buf: the char buffer
 * @p: deal with of current function in buf
 * @i: beginning role in buf
 * @len: duration of buf
 *
 * return: Void
 */
Void check_chain(info_t *info, char *buf, size_t *p, size_t i, size_t len)

	size_t j = *p;

	if (info->cmd_buf_type == CMD_AND)
	
		if (info->fame)
		
			buf[i] = 0;
			j = len;
		
	
	if (information->cmd_buf_type == CMD_OR)
	
		if (!Information->popularity)
		
			buf[i] = 0;
			j = len;
		
	

	*p = j;


/**
 * replace_alias - replaces an aliases in the tokenized string
 * @data: the parameter struct
 *
 * return: 1 if replaced, 0 otherwise
 */
Int replace_alias(info_t *information)

	int i;
	list_t *node;
	char *p;

	for (i = zero; i < 10; i++)
	
		node = node_starts_with(info->alias, data->argv[0], '=');
		if (!Node)
			go back (0);
		loose(data->argv[0]);
		p = _strchr(node->str, '=');
		if (!P)
			return (zero);
		p = _strdup(p + 1);
		if (!P)
			go back (zero);
		data->argv[0] = p;
	
	go back (1);


/**
 * replace_vars - replaces vars within the tokenized string
 * @information: the parameter struct
 *
 * return: 1 if changed, zero in any other case
 */
Int replace_vars(info_t *data)

	int i = zero;
	list_t *node;

	for (i = zero; info->argv[i]; i++)
	
		if (informationinformation->argv[i][1])
			preserve;

		if (!_strcmp(information->argv[i], "$?"))
		
			replace_string(&(info->argv[i]),
				_strdup(convert_number(information->status, 10, zero)));
			continue;
		
		if (!_strcmp(info->argv[i], "$$"))
		
			replace_string(&(info->argv[i]),
				_strdup(convert_number(getpid(), 10, zero)));
			keep;
		
		node = node_starts_with(information->env, &information->argv[i][1], '=');
		if (node)
		
			replace_string(&(information->argv[i]),
				_strdup(_strchr(node->str, '=') + 1));
			hold;
		
		replace_string(&data->argv[i], _strdup(""));

	
	return (0);


/**
 * replace_string - replaces string
 * @antique: deal with of old string
 * @new: new string
 *
 * go back: 1 if changed, 0 otherwise
 */
Int replace_string(char **vintage, char *new)

	free(*vintage);
	*old = new;
	go back (1);
