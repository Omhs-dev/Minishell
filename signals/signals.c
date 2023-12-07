#include "../include/signals.h"


void sigint_handler(int sig)
{
    if (!g_global_f.heredoc)
        ft_putstr_fd("\n", STDERR_FILENO);
    rl_on_new_line();
    rl_replace_line("", 0);
    rl_redisplay();
    (void)sig;
}

void sigquit_handler(int sig)
{
    ft_putstr_fd("Quit: ", STDERR_FILENO);
    ft_putnbr_fd(sig, STDERR_FILENO);
    ft_putchar_fd('\n', STDERR_FILENO);
}
void init_signals(void)
{
    rl_event_hook = NULL;
    signal(SIGINT, sigint_handler);
    signal(SIGQUIT, sigquit_handler);
}

// int main(void)
// {
//     init_signals();

//     while (1)
//     {
//         char* input = readline("");
//         if (!input)
//         {
//             // Ctrl+D was pressed, exit the loop
//             printf("\nExiting...\n");
//             break;
//         }
//         printf("You entered: %s\n", input);
//         free(input);
//     }

//     return 0;
// }
