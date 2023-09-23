#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>

#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <unistd.h>
extern char **environ;

int sh_exit(char **args);

int _strcmp(char *s1, char *s2);
int _strlen(char *s);
size_t _strncmp(char *s1, char *s2, size_t n);
int _values_path(char **arg, char **env);


char *_strcpy(char *dest, char *src);

char *_strcat(char *dest, char *src);

int _putchar(char c);

int _fork_fun(char **arg, char **av, char **env, char *lineptr, int np, int c);

char **tokenize(char *lineptr);

char *_getline_command(void);

void _getenv(char **env);
char *_get_path(char **env);


void _exit_command(char **args, char *lineptr, int _exit);



#endif
