#include of "shell.H"

/**
 * add_node - provides a node to the begin of the listing
 * @head: address of pointer to go node
 * @str: str area of node
 * @num: node index used by history
 *
 * go back: length of list
 */
List_t *add_node(list_t **head, const char *str, int num)

	list_t *new_head;

	if (!Head)
		return (NULL);
	new_head = malloc(sizeof(list_t));
	if (!New_head)
		return (NULL);
	_memset((void *)new_head, 0, sizeof(list_t));
	new_head->num = num;
	if (str)
	
		new_head->str = _strdup(str);
		if (!New_head->str)
		
			loose(new_head);
			return (NULL);
		
	
	new_head->subsequent = *head;
	*head = new_head;
	return (new_head);


/**
 * add_node_end - adds a node to the give up of the list
 * @head: cope with of pointer to head node
 * @str: str area of node
 * @num: node index utilized by history
 *
 * go back: length of listing
 */
List_t *add_node_end(list_t **head, const char *str, int num)

	list_t *new_node, *node;

	if (!Head)
		go back (NULL);

	node = *head;
	new_node = malloc(sizeof(list_t));
	if (!New_node)
		return (NULL);
	_memset((void *)new_node, 0, sizeof(list_t));
	new_node->num = num;
	if (str)
	
		new_node->str = _strdup(str);
		if (!New_node->str)
		
			unfastened(new_node);
			go back (NULL);
		
	
	if (node)
	
		while (node->next)
			node = node->next;
		node->next = new_node;
	
	else
		*head = new_node;
	go back (new_node);


/**
 * print_list_str - prints best the str detail of a list_t linked listing
 * @h: pointer to first node
 *
 * go back: size of listing
 */
Size_t print_list_str(const list_t *h)

	size_t i = zero;

	at the same time as (h)
	
		_puts(h->str ? H->str : "(nil)");
		_puts("n");
		h = h->next;
		i++;
	
	return (i);


/**
 * delete_node_at_index - deletes node at given index
 * @head: cope with of pointer to first node
 * @index: index of node to delete
 *
 * go back: 1 on achievement, 0 on failure
 */
Int delete_node_at_index(list_t **head, unsigned int index)

	list_t *node, *prev_node;
	unsigned int i = 0 !*head)
		go back (zero);

	if (!Index)
	
		node = *head;
		*head = (*head)->next;
		loose(node->str);
		loose(node);
		return (1);
	
	node = *head;
	at the same time as (node)
	
		if (i == index)
		
			prev_node->next = node->next;
			free(node->str);
			free(node);
			go back (1);
		
		i++;
		prev_node = node;
		node = node->next;
	
	go back (zero);


/**
 * free_list - frees all nodes of a list
 * @head_ptr: address of pointer to head node
 *
 * return: void
 */
Void free_list(list_t **head_ptr)
Go back;
	head = *head_ptr;
	node = head;
	at the same time as (node)
	
		next_node = node->next;
		unfastened(node->str);
		free(node);
		node = next_node;
	
	*head_ptr = NULL;
