#ifndef MINISHEL_H
#define MINISHEL_H

#include "./garbage_collector.h"
#include "../lib/libft_sub/includes/ft_printf.h"
#include "../lib/libft_sub/includes/libft.h"
#include "../lib/libft_sub/includes/get_next_line_bonus.h"
#include "./builtins.h"
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <termios.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
# include <sys/ioctl.h>
#include <sys/wait.h>
#include <readline/readline.h>
#include <readline/history.h>

#define EXIT_STATUS_CTRL_C 130

void init_signals(void);
void sigint_handler(int sig);
void sigquit_handler(int sig);
int ft_strcmp(char *str_1, char *str_2);
char *ft_strcpy(char *s1, char *s2);

#endif