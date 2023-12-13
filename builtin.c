#include of "shell.H"

/**
 * _myexit - exits the shell
 * @data: structure containing ability arguments. Used to keep
 *          consistent feature prototype.
 *  return: exits with a given go out status
 *         (zero) if data.Argv[0] != "exit"
 */
Int _myexit(info_t *data)

	int exitcheck;

	if (info->argv[1])  /* If there's an exit arguement */
	
		exitcheck = _erratoi(data->argv[1]);
		if (exitcheck == -1)
		
			information->popularity = 2;
			print_error(data, "unlawful wide variety: ");
			_eputs(data->argv[1]);
			_eputchar('n');
			go back (1);
		
		data->err_num = _erratoi(info->argv[1]);
		go back (-2);
	
	data->err_num = -1;
	return (-2);


/**
 * _mycd - changes the present day listing of the process
 * @info: shape containing capacity arguments. Used to hold
 *          constant characteristic prototype.
 *  go back: constantly 0
 */
Int _mycd(info_t *information)

	char *s, *dir, buffer[1024];
	int chdir_ret;

	s = getcwd(buffer, 1024);
	if (!S)
		_puts("TODO: >>getcwd failure emsg right here<<n");
	if (!Info->argv[1])
	
		dir = _getenv(info, "domestic=");
		if (!Dir)
			chdir_ret = /* TODO: what ought to this be? */
				chdir((dir = _getenv(info, "PWD=")) ? Dir : "/");
		else
			chdir_ret = chdir(dir);
	
	else if (_strcmp(data->argv[1], "-") == 0)
	
		if (!_getenv(info, "OLDPWD="))
		
			_puts(s);
			_putchar('n');
			return (1);
		
		_puts(_getenv(data, "OLDPWD=")), _putchar('n');
		chdir_ret = /* TODO: what should this be? */
			chdir((dir = _getenv(information, "OLDPWD=")) ? Dir : "/");
	
	else
		chdir_ret = chdir(info->argv[1]);
	if (chdir_ret == -1)
	
		print_error(data, "can not cd to ");
		_eputs(data->argv[1]), _eputchar('n');
	
	else
	
		_setenv(information, "OLDPWD", _getenv(info, "PWD="));
		_setenv(info, "PWD", getcwd(buffer, 1024));
	
	return (0);


/**
 * _myhelp - adjustments the present day directory of the process
 * @information: shape containing ability arguments. Used to keep
 *          regular characteristic prototype.
 *  return: usually zero
 */
Int _myhelp(info_t *data)

	char **arg_array;

	arg_array = information->argv;
	_puts("assist call works. Function not but applied n");
	if (0)
		_puts(*arg_array); /* temp att_unused workaround */
	go back (zero);
