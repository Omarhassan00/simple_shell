#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>
#define DELIM "\t\n"

extern char **come;
char *read(void);
char *token(char *c);
int _execute(char **order , char **b);
char *up(const char *pt);
int cmd(char *s1 , char *s2);
int len(char *s);
char *cat(char *dot , char *cod);
char *cpy(char *dot , char *cod);
void frarry(char **mrk);

#endif
