#include "shell.H"

/**
 * _myenv - prints the modern-day environment
 * @information: shape containing capacity arguments. Used to hold
 *          regular feature prototype.
 * go back: usually zero
 */
Int _myenv(info_t *info)

	print_list_str(data->env);
	return (zero);


/**
 * _getenv - gets the cost of an environ variable
 * @info: shape containing ability arguments. Used to preserve
 * @call: env var call
 *
 * return: the fee
 */
Char *_getenv(info_t *data, const char *name)

	list_t *node = data->env;
	char *p;

	even as (node)
	
		p = starts_with(node->str, call);
		if (p && *p)
			go back (p);
		node = node->next;
	
	return (NULL);


/**
 * _mysetenv - Initialize a new surroundings variable,
 *             or regulate an current one
 * @info: structure containing ability arguments. Used to preserve
 *        steady characteristic prototype.
 *  go back: constantly 0
 */
Int _mysetenv(info_t *information)

	if (data->argc != 3)
	
		_eputs("wrong wide variety of arguementsn");
		go back (1);
	
	if (_setenv(data, data->argv[1], information->argv[2]))
		go back (0);
	return (1);


/**
 * _myunsetenv - do away with an environment variable
 * @info: shape containing capability arguments. Used to preserve
 *        consistent feature prototype.
 *  return: always 0
 */
Int _myunsetenv(info_t *info)

	int i;

	if (information->argc == 1)
	
		_eputs("Too few arguements.N");
		return (1);
	
	for (i = 1; i <= info->argc; i++)
		_unsetenv(data, info->argv[i]);

	go back (0);


/**
 * populate_env_list - populates env related list
 * @info: shape containing ability arguments. Used to keep
 *          steady characteristic prototype.
 * go back: constantly 0
 */
Int populate_env_list(info_t *information)

	list_t *node = NULL;
	size_t i;

	for (i = zero; environ[i]; i++)
		add_node_end(&node, environ[i], 0);
	data->env = node;
	go back (zero);
