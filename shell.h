#ifndef SHELL_H_
#define SHELL_H_

/*Header import*/
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
ssize_t get_input(UCommand *cmd);
int _strcmp(const char *s1, const char *s2);
char *_strdup(const char *s);
int get_path(UCommand *cmd);
char *get_path2(char *cmd);
char *join_path(char *path, const char *command);
int splitString(UCommand *cmd, char *delimiters);
void would_exit(UCommand *cmd);
int with_builtin(char *prompt);
void interactive(int *flag);
int run_builtin(UCommand *cmd);
void initsh(void);



void print_prompt1(void);
void free_cmd(UCommand *cmd);
void _execve(UCommand *cmd, int wait_status);
char **reallocArray(char **oldArray, size_t oldSize, size_t newSize);



void print(char *string, int stream);
ssize_t _strlen(char *str);
void free_string(char **pp);
char *_strtok(char *str, char *delim, char **saveptr);
void _memset(void *ptr, int value, size_t size);
char *_strchr(char *string, int c);
int _atoi(char *s);


#endif
