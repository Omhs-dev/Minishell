#ifndef MINISHEL_H
#define MINISHEL_H

#include "../lib/libft_sub/includes/ft_printf.h"
#include "../lib/libft_sub/includes/libft.h"
#include "../lib/libft_sub/includes/get_next_line_bonus.h"
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

typedef struct s_global_f
{
    int cmd;
    int error_n;
    int heredoc;
    int stop_heredoc;
} t_global_f;

t_global_f g_global_f;

#endif