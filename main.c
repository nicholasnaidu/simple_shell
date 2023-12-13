#include "shell.H"

/**
 * main - entry point
 * @ac: arg count
 * @av: arg vector
 *
 * return: 0 on fulfillment, 1 on error
 */
Int essential(int ac, char **av)

	info_t information[] =  INFO_INIT ;
	int fd = 2;

	asm ("mov %1, %0nt"
		"upload $three, %0"
		: "=r" (fd)
		: "r" (fd));

	if (ac == 2)
	
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
		
			if (errno == EACCES)
				go out(126);
			if (errno == ENOENT)
			
				_eputs(av[0]);
				_eputs(": 0: can't open ");
				_eputs(av[1]);
				_eputchar('n');
				_eputchar(BUF_FLUSH);
				exit(127);
			
			return (EXIT_FAILURE);
		
		info->readfd = fd;
	
	populate_env_list(data);
	read_history(info);
	hsh(info, av);
	go back (EXIT_SUCCESS);
