#include "../include/builtins.h"

char *ft_strcpy(char *s1, char *s2)
{
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (s1);
}

int ft_strcmp(char *str_1, char *str_2)
{
    while (*str_1 == *str_2
        && *str_1)
    {
        ++str_1;
        ++str_2;
    }
    return (*str_1 - *str_2);
}

static void new_builtin(t_builtin **builtin_list, int *num_builtins, char *cmd, void (*f)())
{
    *builtin_list = malloc( sizeof(t_builtin) * (*num_builtins + 1));
    (*builtin_list)[*num_builtins].cmd = malloc(ft_strlen(cmd) + 1);
    ft_strcpy((*builtin_list)[*num_builtins].cmd, cmd);
    (*builtin_list)[*num_builtins].f = f;
    (*num_builtins)++;
}


// Function to check if a command is a built-in command
int check_builtin(t_builtin *builtin_list, int num_builtins, char *cmd)
{
    int i;
    
    i = 0;
    while (i < num_builtins)
    {
        if (ft_strcmp(builtin_list[i].cmd, cmd) == 0)
            return 1;
        i++;
    }
    return 0;
}

void init_builtin(t_builtin **builtin_list, int *num_builtins)
{
    *builtin_list = NULL;
    *num_builtins = 0;

    // Add each built-in command to the list
    new_builtin(builtin_list, num_builtins, "echo", &ft_echo);
}
