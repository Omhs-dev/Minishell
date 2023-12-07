#include "./include/minishell.h"

// int ft_strcmp(char *str_1, char *str_2)
// {
//     while (*str_1 == *str_2
//         && *str_1)
//     {
//         ++str_1;
//         ++str_2;
//     }
//     return (*str_1 - *str_2);
// }

int main(void)
{
    // t_garbage_collector *garbage;
    char *cmd;
    

    // garbage = init_garbage_collector();
    
    while (1)
    {
        
        cmd = readline("minishell :>");
        function(cmd)
        if (ft_strcmp(cmd, "echo") == 0)
            break;
        printf("%s\n", cmd);
        free(cmd);
    }
}


// int main(void)
// {
//     int pid = fork();
//     if (pid == -1)
//         return 1;
//     if (pid == 0)
//     {
//         while (1)
//         {
//             printf("this is a text\n");
//             usleep(500000);
//         }
        
//     } else {
//         sleep(1);
//         kill(pid, SIGKILL);
//         wait(NULL);
//     }
//     return (0);
// }


// void     INThandler(int);

// int  main(void)
// {
//      signal(SIGINT, INThandler);
//      while (1)
//           pause();
//      return 0;
// }

// void  INThandler(int sig)
// {
//      char  c;

//      signal(sig, SIG_IGN);
//      printf("OUCH, did you hit Ctrl-C?\n"
//             "Do you really want to quit? [y/n] ");
//      c = getchar();
//      if (c == 'y' || c == 'Y')
//           exit(0);
//      else
//           signal(SIGINT, INThandler);
//      getchar(); // Get new line character
// }


// int main() {
//     char* input;

//     while (1) {
//         input = readline("Enter something: ");

//         if (!input) {
//             break;  // Exit loop if Ctrl+D is pressed
//         }

//         if (*input) {
//             add_history(input);  // Add to history if not empty
//         }

//         printf("You entered: %s\n", input);

//         free(input);
//     }

//     return 0;
// }

// int	g_status;

// void	handle_sigint(int sig)
// {
// 	if (sig == SIGINT)
// 	{
// 		g_status = EXIT_STATUS_CTRL_C;
// 		ioctl(STDIN_FILENO, TIOCSTI, "\n");
// 		rl_replace_line("", 0);
// 		rl_on_new_line();
// 	}
// }

// int main() {
//     // Assuming you have initialized the list of built-ins using init_builtin
//     t_builtin *builtin_list;
//     int num_builtins;

//     init_builtin(&builtin_list, &num_builtins);

//     // Test the check_builtin function
//     if (check_builtin(builtin_list, num_builtins, "echo")) {
//         printf("The 'echo' command is a built-in command!\n");
        
//         // Execute the 'echo' command
//         t_builtin echo_command = builtin_list[0];
//         echo_command.f();
//     } else {
//         printf("The 'echo' command is not a built-in command.\n");
//     }

//     // Free the allocated memory for built-in commands
//     // free_builtin(builtin_list, num_builtins);

//     return 0;
// }
