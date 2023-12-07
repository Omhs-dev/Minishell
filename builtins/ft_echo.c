#include "../include/builtins.h"

void		ft_echo(char **args, t_list **env)
{
	(void)env;
	while (*args)
	{
		ft_printf("%s ", *args);
		args++;
	}
	ft_printf("echo printed\n");
}