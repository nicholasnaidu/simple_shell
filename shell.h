#ifndef _SHELL_H_
#outline _SHELL_H_

#include <stdio.H>
#consist of <stdlib.H>
#include <unistd.H>
#encompass <string.H>
#encompass <sys/types.H>
#include <sys/wait.H>
#include <sys/stat.H>
#include <limits.H>
#include <fcntl.H>
#include <errno.H>

/* for study/write buffers */
#outline READ_BUF_SIZE 1024
#define WRITE_BUF_SIZE 1024
#outline BUF_FLUSH -1

/* for command chaining */
#outline CMD_NORM	0
#define CMD_OR		1
#define CMD_AND		2
#define CMD_CHAIN	three

/* for convert_number() */
#outline CONVERT_LOWERCASE	1
#outline CONVERT_UNSIGNED	2

/* 1 if the usage of device getline() */
#outline USE_GETLINE 0
#define USE_STRTOK zero

#define HIST_FILE	".Simple_shell_history"
#define HIST_MAX	4096

Extern char **environ;


/**
 * struct liststr - singly related listing
 * @num: the quantity area
 * @str: a string
 * @next: points to the subsequent node
 */
Typedef struct liststr

	int num;
	char *str;
	struct liststr *next;
 list_t;

/**
 *struct passinfo - carries pseudo-arguements to pass right into a function,
 *		permitting uniform prototype for characteristic pointer struct
 *@arg: a string generated from getline containing arguements
 *@argv: an array of strings generated from arg
 *@route: a string course for the cutting-edge command
 *@argc: the argument count
 *@line_count: the mistake be counted
 *@err_num: the mistake code for go out()s
 *@linecount_flag: if on remember this line of input
 *@fname: this system filename
 *@env: connected listing local replica of environ
 *@environ: custom changed copy of environ from LL env
 *@history: the records node
 *@alias: the alias node
 *@env_changed: on if environ changed into changed
 *@fame: the return status of the final exec'd command
 *@cmd_buf: address, &&, ;
 *@readfd: the fd from which to study line enter
 *@histcount: the records line variety be counted
 */
Typedef struct passinfo

	char *arg;
	char **argv;
	char *direction;
	int argc;
	unsigned int line_count;
	int err_num;
	int linecount_flag;
	char *fname;
	list_t *env;
	list_t *records;
	list_t *alias;
	char **environ;
	int env_changed;
	int repute;

	char **cmd_buf; /* pointer to cmd ; chain buffer, for reminiscence mangement */
	int cmd_buf_type; /* CMD_type  info_t;

#define INFO_INIT 
NULL, NULL, NULL, zero, zero, 0, zero, NULL, NULL, NULL, NULL, NULL, zero, 0, NULL, 
	zero, zero, 0

/**
 *struct builtin - includes a builtin string and associated characteristic
 *@kind: the builtin command flag
 *@func: the feature
 */
Typedef struct builtin

	char *type;
	int (*func)(info_t *);
 builtin_table;


/* toem_shloop.C */
Int hsh(info_t *, char **);
Int find_builtin(info_t *);
Void find_cmd(info_t *);
Void fork_cmd(info_t *);

/* toem_parser.C */
Int is_cmd(info_t *, char *);
Char *dup_chars(char *, int, int);
Char *find_path(info_t *, char *, char *);

/* loophsh.C */
Int loophsh(char **);

/* toem_errors.C */
Void _eputs(char *);
Int _eputchar(char);
Int _putfd(char c, int fd);
Int _putsfd(char *str, int fd);

/* toem_string.C */
Int _strlen(char *);
Int _strcmp(char *, char *);
Char *starts_with(const char *, const char *);
Char *_strcat(char *, char *);

/* toem_string1.C */
Char *_strcpy(char *, char *);
Char *_strdup(const char *);
Void _puts(char *);
Int _putchar(char);

/* toem_exits.C */
Char *_strncpy(char *, char *, int);
Char *_strncat(char *, char *, int);
Char *_strchr(char *, char);

/* toem_tokenizer.C */
Char **strtow(char *, char *);
Char **strtow2(char *, char);

/* toem_realloc.C */
Char *_memset(char *, char, unsigned int);
Void ffree(char **);
Void *_realloc(void *, unsigned int, unsigned int);

/* toem_memory.C */
Int bfree(void **);

/* toem_atoi.C */
Int interactive(info_t *);
Int is_delim(char, char *);
Int _isalpha(int);
Int _atoi(char *);

/* toem_errors1.C */
Int _erratoi(char *);
Void print_error(info_t *, char *);
Int print_d(int, int);
Char *convert_number(lengthy int, int, int);
Void remove_comments(char *);

/* toem_builtin.C */
Int _myexit(info_t *);
Int _mycd(info_t *);
Int _myhelp(info_t *);

/* toem_builtin1.C */
Int _myhistory(info_t *);
Int _myalias(info_t *);

/*toem_getline.C */
Ssize_t get_input(info_t *);
Int _getline(info_t *, char **, size_t *);
Void sigintHandler(int);

/* toem_getinfo.C */
Void clear_info(info_t *);
Void set_info(info_t *, char **);
Void free_info(info_t *, int);

/* toem_environ.C */
Char *_getenv(info_t *, const char *);
Int _myenv(info_t *);
Int _mysetenv(info_t *);
Int _myunsetenv(info_t *);
Int populate_env_list(info_t *);

/* toem_getenv.C */
Char **get_environ(info_t *);
Int _unsetenv(info_t *, char *);
Int _setenv(info_t *, char *, char *);

/* toem_history.C */
Char *get_history_file(info_t *info);
Int write_history(info_t *info);
Int read_history(info_t *information);
Int build_history_list(info_t *information, char *buf, int linecount);
Int renumber_history(info_t *info);

/* toem_lists.C */
List_t *add_node(list_t **, const char *, int);
List_t *add_node_end(list_t **, const char *, int);
Size_t print_list_str(const list_t *);
Int delete_node_at_index(list_t **, unsigned int);
Void free_list(list_t **);

/* toem_lists1.C */
Size_t list_len(const list_t *);
Char **list_to_strings(list_t *);
Size_t print_list(const list_t *);
List_t *node_starts_with(list_t *, char *, char);
Ssize_t get_node_index(list_t *, list_t *);

/* toem_vars.C */
Int is_chain(info_t *, char *, size_t *);
Void check_chain(info_t *, char *, size_t *, size_t, size_t);
Int replace_alias(info_t *);
Int replace_vars(info_t *);
Int replace_string(char **, char *);

#endif
