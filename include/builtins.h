#ifndef BUILTINS_H
#define BUILTINS_H

# include <stdlib.h>
# include <string.h>
# include <stdio.h>

#include "./minishell.h"

typedef struct s_builtin {
    char *cmd;         // Name of the command
    void (*f)();       // Function pointer to the command's implementation
} t_builtin;

void ft_echo();
// static void add_builtin(t_builtin **builtin_list, int *num_builtins, char *cmd, void (*f)());
int check_builtin(t_builtin *builtin_list, int num_builtins, char *cmd);
void init_builtin(t_builtin **builtin_list, int *num_builtins);
void free_builtin(t_builtin *builtin_list, int num_builtins);

#endif