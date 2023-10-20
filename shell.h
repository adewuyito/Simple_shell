#ifndef SHELL_H_
#define SHELL_H_

/*Header import*/
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "symtab.h"
#include <ctype.h>
#include "structs.h"

extern char **environ;

/*Function prototypes*/
int _erratoi(char *s);
ssize_t get_input(UCommand *cmd);
int _strcmp(const char *s1, const char *s2);
char *_strdup(const char *s);
int get_path(UCommand *cmd);
char *get_path2(char *cmd);
char *join_path(char *path, const char *command);
int splitString(UCommand *cmd, char *delimiters);
int splitString2(UCommand *cmd, char *delimiters);
void would_exit(UCommand *cmd);
int with_builtin(char *prompt);
int interactive(UCommand *cmd);
int run_builtin(UCommand *cmd);
void initsh(void);
int fill_fd(int fd);
void hsh(UCommand *cmd, char **av);
int string_array_len(char **av);
char **remove_comments(char **cmd);
int what_node(char **av);
char **copy_av(char **av);
void print_error(UCommand *cmd);
char *itoa(int value, char *result, int base);

void print_prompt1(void);
void free_cmd(UCommand *cmd);
void _execve(UCommand *cmd);
char **reallocArray(char **oldArray, size_t oldSize, size_t newSize);

void print(char *string, int stream);
ssize_t _strlen(char *str);
void free_string(char **pp);
void _memset(void *ptr, int value, size_t size);
char *_strchr(char *string, int c);
int _atoi(char *s);
char **_my_strtok(char *str, char *d);
int is_delim(char c, char *delim);

#endif
