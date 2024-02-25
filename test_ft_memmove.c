/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponieck <jponieck@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:36:05 by jponieck          #+#    #+#             */
/*   Updated: 2024/02/02 18:49:52 by jponieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <string.h> 
#include <unistd.h> 
#include "libft.h" 

char *empty = "";
char *nll = NULL;

void printmem(char *src, int size)
{
	int i = 0;
	while (i < size)
		printf("%c ", src[i++]);
}

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
	char feed[] = "happy duck goes to sleep at 9 am";
	char *src = strstr(feed, argv[1]);
	char *dst = strstr(feed, argv[2]);
	int size = atoi(argv[3]);
	if (atoi(argv[4]) == 1)
		memmove(dst, src, size);
	else
		ft_memmove(dst, src, size);
	printf("%s\n", feed);
}	
	
