/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponieck <jponieck@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:59:31 by jponieck          #+#    #+#             */
/*   Updated: 2024/02/02 20:27:27 by jponieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h> 
#include <stdio.h> 
#include "libft.h" 

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
	char *dst = test_arg(argv[1]);
	char *src = test_arg(argv[2]);
	int size = ft_atoi(argv[3]);
	int r;
	if (ft_atoi(argv[4]) == 1)
		r = strlcat(dst, src, size);
	else
		r = ft_strlcat(dst, src, size);

	printf("%d %s", r, dst); 
}	
	
