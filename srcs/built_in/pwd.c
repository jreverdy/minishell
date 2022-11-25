#include "../../includes/minishell.h"

void	ft_update_saved_pwd(t_shell *sh, char *str)
{
	free(sh->saved_pwd);
	sh->saved_pwd = ft_strdup(str);
}

void	ft_pwd(t_shell *sh)
{
	printf("%s\n", sh->saved_pwd);
}