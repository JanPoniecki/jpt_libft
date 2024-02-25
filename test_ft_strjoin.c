/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponieck <jponieck@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:44:44 by jponieck          #+#    #+#             */
/*   Updated: 2024/02/04 20:49:33 by jponieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include "libft.h" 
#include "libbrwd/libbrwd.h" 

char *empty = "";
char *nll = NULL;

char *test_arg(char *str)
{
	if (ft_strncmp(str, "EMPTY", 6) == 0)
		return (empty);
	else if(ft_strncmp(str, "NULL", 6) == 0)
		return (nll);
	else
	{
		int i = 0;
		while (str[i])
		{
			str[i] = (str[i] == '@' ? 0 : str[i]);
			i++;
		}
		return (str);
	}
}

int	main(int argc, char **argv)
{
	char *src = test_arg(argv[1]);
	char *join_me = test_arg(argv[2]);
	int mode = ft_atoi(argv[3]);
	char *r;
	if (mode == 1)
		r = brwd_strjoin(src, join_me);
	else
		r = ft_strjoin(src, join_me);
	printf("%s ", r);
	free(r);
}	
	
