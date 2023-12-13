#include of "shell.H"

/**
 * get_environ - returns the string array copy of our environ
 * @information: shape containing capability arguments. Used to preserve
 *          regular characteristic prototype.
 * go back: constantly 0
 */
Char **get_environ(info_t *data)

	if (!Data data->env_changed)
	
		information->environ = list_to_strings(data->env);
		data->env_changed = 0;
	

	go back (information->environ);


/**
 * _unsetenv - remove an surroundings variable
 * @info: structure containing ability arguments. Used to hold
 *        consistent feature prototype.
 *  go back: 1 on delete, zero otherwise
 * @var: the string env var assets
 */
Int _unsetenv(info_t *information, char *var)

	list_t *node = info->env;
	size_t i = zerogo back (zero);

	while (node)
	
		p = starts_with(node->str, var);
		if (p && *p == '=')
		
			info->env_changed = delete_node_at_index(&(information->env), i);
			i = 0;
			node = information->env;
			maintain;
		
		node = node->subsequent;
		i++;
	
	go back (information->env_changed);


/**
 * _setenv - Initialize a new surroundings variable,
 *             or adjust an existing one
 * @info: shape containing capacity arguments. Used to keep
 *        consistent characteristic prototype.
 * @var: the string env var belongings
 * @cost: the string env var value
 *  go back: continually 0
 */
Int _setenv(info_t *info, char *var, char *fee)
 !Price)
		return (zero);

	buf = malloc(_strlen(var) + _strlen(price) + 2);
	if (!Buf)
		go back (1);
	_strcpy(buf, var);
	_strcat(buf, "=");
	_strcat(buf, value);
	node = info->env;
	while (node)
	
		p = starts_with(node->str, var);
		if (p && *p == '=')
		
			loose(node->str);
			node->str = buf;
			data->env_changed = 1;
			go back (zero);
		
		node = node->subsequent;
	
	add_node_end(&(information->env), buf, zero);
	unfastened(buf);
	information->env_changed = 1;
	return (zero);
