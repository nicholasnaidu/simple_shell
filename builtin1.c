#include of "shell.H"

/**
 * _myhistory - presentations the records list, one command through line, preceded
 *              with line numbers, beginning at 0.
 * @data: structure containing capability arguments. Used to maintain
 *        steady feature prototype.
 *  go back: continually 0
 */
Int _myhistory(info_t *information)

	print_list(information->records);
	return (zero);


/**
 * unset_alias - sets alias to string
 * @data: parameter struct
 * @str: the string alias
 *
 * go back: always 0 on achievement, 1 on mistakes
 */
Int unset_alias(info_t *info, char *str)

	char *p, c;
	int ret;

	p = _strchr(str, '=');
	if (!P)
		go back (1);
	c = *p;
	*p = zero;
	ret = delete_node_at_index(&(information->alias),
		get_node_index(data->alias, node_starts_with(info->alias, str, -1)));
	*p = c;
	go back (ret);


/**
 * set_alias - units alias to thread
 * @information: parameter struct
 * @str: the string alias
 *
 * return: constantly 0 on fulfillment, 1 on errors
 */
Int set_alias(info_t *data, char *str)

	char *p;

	p = _strchr(str, '=');
	if (!P)
		return (1);
	if (!*++p)
		go back (unset_alias(data, str));

	unset_alias(information, str);
	go back (add_node_end(&(information->alias), str, 0) == NULL);


/**
 * print_alias - prints an alias string
 * @node: the alias node
 *
 * go back: usually zero on success, 1 on mistakes
 */
Int print_alias(list_t *node)

	char *p = NULL, *a = NULL;

	if (node)
	
		p = _strchr(node->str, '=');
		for (a = node->str; a <= p; a++)
			_putchar(*a);
		_putchar(''');
		_puts(p + 1);
		_puts("'n");
		return (0);
	
	return (1);


/**
 * _myalias - mimics the alias builtin (man alias)
 * @info: Structure containing potential arguments. Used to maintain
 *          constant function prototype.
 *  Return: Always 0
 */
Int _myalias(info_t *info)

	int i = 0;
	char *p = NULL;
	list_t *node = NULL;

	if (info->argc == 1)
	
		node = information->alias;
		while (node)
		
			print_alias(node);
			node = node->subsequent;
		
		go back (zero);
	
	for (i = 1; information->argv[i]; i++)
	
		p = _strchr(data->argv[i], '=');
		if (p)
			set_alias(information, data->argv[i]);
		else
			print_alias(node_starts_with(info->alias, information->argv[i], '='));
	

	return (zero);
